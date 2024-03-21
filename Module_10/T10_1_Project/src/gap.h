#pragma once
#include <BLE.h>
#include <mbed.h>

#include <string>
/**
 * @brief Generic Access Profile class that advertises the device existence
 *
 * It is non-copyable class that implements Mbed's ble::Gap::EventHandler class.
 *
 * @note You must inherit this class as specified in the task description (of Module 7).
 *
 * @note You can print errors of ble_error_t type using static member function
 * ble::BLE::errorToString of ble::BLE class. This function returns a string;
 * you can use the returned string at your convenience.
 *
 * -- You can also use bleErrorToString function declared ble_utils.h
 */

class CGap : private mbed::NonCopyable<CGap>, public ble::Gap::EventHandler {
   protected:
	ble::BLE &_ble;			   //!< A reference to the BLE system's BLE object instance
	EventQueue &_event_queue;  //!< A reference to the application's EventQueue
	std::string _device_name;  //!< The name of the device.

	DigitalOut _led;  //!< The system LED that will be used for indicating advertisement and connection status
	int _led_event_id;	//!< The Event identifier (returned by EventQueue::call_every function)

	ble::AdvertisingDataBuilder _adv_data_builder;	//!< Advertisement data builder that will be used for
													//!< creating, storing and manipulating advertisement data
	uint8_t _adv_data_buffer[ble::LEGACY_ADVERTISING_MAX_SIZE];	 //!< The buffer that is used by the
																 //!< advertisement data builder
	// declare the new mbed::Callback type member to store a function
	// pointer that will be called when BLE initialization (successfully) completes
	mbed::Callback<void(ble::BLE &)> _on_ble_init_callback;

	// declare the new mbed::Callback type member to store a function
	// pointer that will be called when BLE peer is (successfully) connected
	mbed::Callback<void(void)> _on_connected;

	// declare the new mbed::Callback type member to store a function
	// pointer that will be called when BLE peer is disconnected
	mbed::Callback<void(void)> _on_disconnected;
   protected:
	/**
	 * @brief Toggles the LED state.
	 *
	 * @note This function must be called by the EventQueue dispatcher.
	 */
	void toggleLED();
	/**
	 * @brief Updates the advertisement data if it needs to be updated.
	 * In this task, you are not required to use this function at all.
	 *
	 * @note This function must be called by the EventQueue dispatcher.
	 */
	void updateAdvertisementData();
	/**
	 * @brief This the application's system BLE initialization complete function.
	 *
	 * @note This function must be registered as BLE initialization completion handler function
	 * by calling BLE::init member function of BLE class.
	 *
	 * @note There are different overloads of BLE::init
	 *
	 * @note You must call _on_ble_init_callback function if it is not nullptr
	 *
	 * @param context The initialization context
	 */
	virtual void onBLEInitCompleteHandler(BLE::InitializationCompleteCallbackContext *context);

	/**
	 * @brief Redirects pending BLE events to EventQueue dispatcher, which calls BLE::processEvents
	 *
	 * @note The BLE event processing can be handed over to the EventQueue dispatcher
	 * using EventQueue::call function. Therefore, we must use this function to bind
	 * Event function to BLE::processEvents function.
	 *
	 * @param context The context of the events to be processed
	 */
	void scheduleBLEEventsToProcess(BLE::OnEventsToProcessCallbackContext *context);

	/**
	 * @brief Handler function called when the BLE connection process completes.
	 *
	 * @note You are required to stop blinking the application LED when BLE is connected.
	 * You can use EventQueue::cancel function with the event identifier to stop periodically
	 * LED toggling.
	 *
	 * @param event The connection event object
	 */
	virtual void onConnectionComplete(const ble::ConnectionCompleteEvent &event) override;
	/**
	 * @brief Handler function called when the BLE connection is terminated (disconnected)
	 *
	 * @param event The disconnection event object
	 */
	virtual void onDisconnectionComplete(const ble::DisconnectionCompleteEvent &event) override;

   public:
	CGap() = delete;
	CGap(const CGap &) = delete;
	const CGap &operator=(const CGap &) = delete;
	/**
	 * @brief Construct a new CGap object
	 *
	 * @param ble A reference to the system's BLE object
	 * @param event_queue A reference to the application's event queue object
	 * @param device_name The name of the device
	 * @param led_pin The LED pin name that will be used by the application
	 * @param on_ble_init_callback The callback function to be called when BLE initialization completes.
	 * @param on_connected The callback function to be called when a peer is connected
	 * @param on_disconnected The callback function to be called when a peer is disconnected
	 */
	CGap(ble::BLE &ble,
		 EventQueue &event_queue,
		 const std::string &device_name,
		 PinName led_pin,
		 const mbed::Callback<void(ble::BLE &)> &on_ble_init_callback = nullptr,
		 const mbed::Callback<void(void)> &on_connected = nullptr,
		 const mbed::Callback<void(void)> &on_disconnected = nullptr);
	/**
	 * @brief Starts BLE operation
	 *
	 * It performs the following operations:
	 * 1. Registers this object's member function as BLE::onEventsToProcess function
	 *    In order to create FunctionPointerWithContext object (required by BLE::onEventsToProcess)
	 *    you can use makeFunctionPointer function.
	 * 2. Register GAP event handler as this object since this class is
	 *    inherited from ble::Gap::EventHandler structure.
	 * 3. Initialize system's BLE object, and register this object's member function
	 *    to be called when the BLE initialization completes.
	 * 4. Dispatches EventQueue events for ever.
	 *
	 * @note It is useful to print the the status of this operations for debugging
	 * and monitoring purposes.
	 *
	 */
	void run();
	/**
	 * @brief Starts advertising
	 *
	 * Advertisement is configured and started as follows:
	 * 1. Create advertisement data using ble::AdvertisingDataBuilder type member
	 * 2. Setup the advertisement parameters
	 * 3. Set the advertisement payload
	 * 4. Start the advertisement
	 * 5. Start toggling the application LED
	 *
	 * @note It is useful to print the the status of this operations for debugging
	 * and monitoring purposes.
	 */
	void startAdvertising();
	/**
	 * @brief Set the OnBLEInitComplete Callback object
	 *
	 * @param callback The callback function to be set
	 */
	void setOnBLEInitCompleteCallback(const mbed::Callback<void(ble::BLE &)> &callback);

	/**
	 * @brief Set the On Connected Callback function
	 *
	 * @param callback The callback function
	 */
	void setOnConnectedCallback(const mbed::Callback<void(void)> &callback);

	/**
	 * @brief Set the On Disconnected Callback function
	 *
	 * @param callback The callback function
	 */
	void setOnDisconnectedCallback(const mbed::Callback<void(void)> &callback);
};