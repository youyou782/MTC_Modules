# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/youyou782/mtc/Module_2/T2_1_First_touch

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/youyou782/mtc/Module_2/T2_1_First_touch/build

# Include any dependencies generated for this target.
include CMakeFiles/first_touch.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/first_touch.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/first_touch.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/first_touch.dir/flags.make

CMakeFiles/first_touch.dir/src/first.cpp.o: CMakeFiles/first_touch.dir/flags.make
CMakeFiles/first_touch.dir/src/first.cpp.o: ../src/first.cpp
CMakeFiles/first_touch.dir/src/first.cpp.o: CMakeFiles/first_touch.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/youyou782/mtc/Module_2/T2_1_First_touch/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/first_touch.dir/src/first.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/first_touch.dir/src/first.cpp.o -MF CMakeFiles/first_touch.dir/src/first.cpp.o.d -o CMakeFiles/first_touch.dir/src/first.cpp.o -c /home/youyou782/mtc/Module_2/T2_1_First_touch/src/first.cpp

CMakeFiles/first_touch.dir/src/first.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/first_touch.dir/src/first.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/youyou782/mtc/Module_2/T2_1_First_touch/src/first.cpp > CMakeFiles/first_touch.dir/src/first.cpp.i

CMakeFiles/first_touch.dir/src/first.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/first_touch.dir/src/first.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/youyou782/mtc/Module_2/T2_1_First_touch/src/first.cpp -o CMakeFiles/first_touch.dir/src/first.cpp.s

CMakeFiles/first_touch.dir/src/main.cpp.o: CMakeFiles/first_touch.dir/flags.make
CMakeFiles/first_touch.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/first_touch.dir/src/main.cpp.o: CMakeFiles/first_touch.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/youyou782/mtc/Module_2/T2_1_First_touch/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/first_touch.dir/src/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/first_touch.dir/src/main.cpp.o -MF CMakeFiles/first_touch.dir/src/main.cpp.o.d -o CMakeFiles/first_touch.dir/src/main.cpp.o -c /home/youyou782/mtc/Module_2/T2_1_First_touch/src/main.cpp

CMakeFiles/first_touch.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/first_touch.dir/src/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/youyou782/mtc/Module_2/T2_1_First_touch/src/main.cpp > CMakeFiles/first_touch.dir/src/main.cpp.i

CMakeFiles/first_touch.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/first_touch.dir/src/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/youyou782/mtc/Module_2/T2_1_First_touch/src/main.cpp -o CMakeFiles/first_touch.dir/src/main.cpp.s

# Object files for target first_touch
first_touch_OBJECTS = \
"CMakeFiles/first_touch.dir/src/first.cpp.o" \
"CMakeFiles/first_touch.dir/src/main.cpp.o"

# External object files for target first_touch
first_touch_EXTERNAL_OBJECTS =

first_touch: CMakeFiles/first_touch.dir/src/first.cpp.o
first_touch: CMakeFiles/first_touch.dir/src/main.cpp.o
first_touch: CMakeFiles/first_touch.dir/build.make
first_touch: CMakeFiles/first_touch.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/youyou782/mtc/Module_2/T2_1_First_touch/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable first_touch"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/first_touch.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/first_touch.dir/build: first_touch
.PHONY : CMakeFiles/first_touch.dir/build

CMakeFiles/first_touch.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/first_touch.dir/cmake_clean.cmake
.PHONY : CMakeFiles/first_touch.dir/clean

CMakeFiles/first_touch.dir/depend:
	cd /home/youyou782/mtc/Module_2/T2_1_First_touch/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/youyou782/mtc/Module_2/T2_1_First_touch /home/youyou782/mtc/Module_2/T2_1_First_touch /home/youyou782/mtc/Module_2/T2_1_First_touch/build /home/youyou782/mtc/Module_2/T2_1_First_touch/build /home/youyou782/mtc/Module_2/T2_1_First_touch/build/CMakeFiles/first_touch.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/first_touch.dir/depend

