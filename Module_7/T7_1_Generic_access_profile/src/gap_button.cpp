#include "gap_button.h"
#include "ble_utils.h"
#include <iostream>

void CGAPButton::buttonPressedHandler(){
    
}

void CGAPButton::toggleLED(){
    
}

void CGAPButton::updateAdvertisementData(){
    
    std::cout << "Advertisement data updated!" << std::endl;
}
void CGAPButton::onBLEInitCompleteHandler(BLE::InitializationCompleteCallbackContext *context){
    // 1. check for the initialization errors using error member of context
    
    // The BLE interface can be accessed now.
    std::cout << "BLE init completed" << std::endl;
    // 2. get and print the device address 
    ble::own_address_type_t addrType;
    ble::address_t address;
    auto error = context->ble.gap().getAddress(addrType, address);
    if (error == BLE_ERROR_NONE) {
        // print the own Bluetooth address using 
        // printBluetoothAddress utility function defined in ble_utils.h
        // note that there are 3 overloads of that function. 
        
    }
    // 3. start blinking the led
    
    // 4. start advertising
    
}

void CGAPButton::scheduleBLEEventsToProcess(BLE::OnEventsToProcessCallbackContext* context){
    
}


CGAPButton::CGAPButton(ble::BLE& ble, 
                        EventQueue& event_queue, 
                        const std::string& device_name, 
                        PinName button_pin, 
                        PinName led_pin){
}


void CGAPButton::run(){
    // 1. Register on events to process callback function.
    
    // 2. Register GAP event handler 
    
    // 3. Initialize the BLE interface by registering a callback function
    
    std::cout << "Starting BLE Application " << std::endl;
    // 4. Dispatch events forever from the main thread
    
    // never reaches this line!
}

void CGAPButton::startAdvertising(){
    // create an ble::AdvertisingParameters object with the specified configuration
    
    // 1. Create advertisement data
    
    // 2. setup the parameters
    
    if (error != 0U) {
        // this is an example error print. You can come up with your own ways to do so.
        // Note that the ble_error_t type variable name is error
        std::cout << ble::BLE::errorToString(error) << std::endl;
        return;
    }
    // 3. set the advertisement payload
    

    // 4. Start advertising 
    
    // 5. Start blinking the Application LED
    
    std::cout << "Device is advertising" << std::endl;
}

void CGAPButton::onConnectionComplete(const ble::ConnectionCompleteEvent &event){
    // keep the LED on
    
    std::cout << "Device is connected" << std::endl;
}
void CGAPButton::onDisconnectionComplete(const ble::DisconnectionCompleteEvent &event){
    
    std::cout << "Device is disconnected" << std::endl;
}