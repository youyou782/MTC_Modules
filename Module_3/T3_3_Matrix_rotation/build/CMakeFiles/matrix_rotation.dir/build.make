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
CMAKE_SOURCE_DIR = /home/youyou782/mtc/Module_3/T3_3_Matrix_rotation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/youyou782/mtc/Module_3/T3_3_Matrix_rotation/build

# Include any dependencies generated for this target.
include CMakeFiles/matrix_rotation.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/matrix_rotation.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/matrix_rotation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/matrix_rotation.dir/flags.make

CMakeFiles/matrix_rotation.dir/src/main.cpp.o: CMakeFiles/matrix_rotation.dir/flags.make
CMakeFiles/matrix_rotation.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/matrix_rotation.dir/src/main.cpp.o: CMakeFiles/matrix_rotation.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/youyou782/mtc/Module_3/T3_3_Matrix_rotation/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/matrix_rotation.dir/src/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/matrix_rotation.dir/src/main.cpp.o -MF CMakeFiles/matrix_rotation.dir/src/main.cpp.o.d -o CMakeFiles/matrix_rotation.dir/src/main.cpp.o -c /home/youyou782/mtc/Module_3/T3_3_Matrix_rotation/src/main.cpp

CMakeFiles/matrix_rotation.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matrix_rotation.dir/src/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/youyou782/mtc/Module_3/T3_3_Matrix_rotation/src/main.cpp > CMakeFiles/matrix_rotation.dir/src/main.cpp.i

CMakeFiles/matrix_rotation.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matrix_rotation.dir/src/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/youyou782/mtc/Module_3/T3_3_Matrix_rotation/src/main.cpp -o CMakeFiles/matrix_rotation.dir/src/main.cpp.s

CMakeFiles/matrix_rotation.dir/src/matrix.cpp.o: CMakeFiles/matrix_rotation.dir/flags.make
CMakeFiles/matrix_rotation.dir/src/matrix.cpp.o: ../src/matrix.cpp
CMakeFiles/matrix_rotation.dir/src/matrix.cpp.o: CMakeFiles/matrix_rotation.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/youyou782/mtc/Module_3/T3_3_Matrix_rotation/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/matrix_rotation.dir/src/matrix.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/matrix_rotation.dir/src/matrix.cpp.o -MF CMakeFiles/matrix_rotation.dir/src/matrix.cpp.o.d -o CMakeFiles/matrix_rotation.dir/src/matrix.cpp.o -c /home/youyou782/mtc/Module_3/T3_3_Matrix_rotation/src/matrix.cpp

CMakeFiles/matrix_rotation.dir/src/matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matrix_rotation.dir/src/matrix.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/youyou782/mtc/Module_3/T3_3_Matrix_rotation/src/matrix.cpp > CMakeFiles/matrix_rotation.dir/src/matrix.cpp.i

CMakeFiles/matrix_rotation.dir/src/matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matrix_rotation.dir/src/matrix.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/youyou782/mtc/Module_3/T3_3_Matrix_rotation/src/matrix.cpp -o CMakeFiles/matrix_rotation.dir/src/matrix.cpp.s

# Object files for target matrix_rotation
matrix_rotation_OBJECTS = \
"CMakeFiles/matrix_rotation.dir/src/main.cpp.o" \
"CMakeFiles/matrix_rotation.dir/src/matrix.cpp.o"

# External object files for target matrix_rotation
matrix_rotation_EXTERNAL_OBJECTS =

matrix_rotation: CMakeFiles/matrix_rotation.dir/src/main.cpp.o
matrix_rotation: CMakeFiles/matrix_rotation.dir/src/matrix.cpp.o
matrix_rotation: CMakeFiles/matrix_rotation.dir/build.make
matrix_rotation: CMakeFiles/matrix_rotation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/youyou782/mtc/Module_3/T3_3_Matrix_rotation/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable matrix_rotation"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/matrix_rotation.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/matrix_rotation.dir/build: matrix_rotation
.PHONY : CMakeFiles/matrix_rotation.dir/build

CMakeFiles/matrix_rotation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/matrix_rotation.dir/cmake_clean.cmake
.PHONY : CMakeFiles/matrix_rotation.dir/clean

CMakeFiles/matrix_rotation.dir/depend:
	cd /home/youyou782/mtc/Module_3/T3_3_Matrix_rotation/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/youyou782/mtc/Module_3/T3_3_Matrix_rotation /home/youyou782/mtc/Module_3/T3_3_Matrix_rotation /home/youyou782/mtc/Module_3/T3_3_Matrix_rotation/build /home/youyou782/mtc/Module_3/T3_3_Matrix_rotation/build /home/youyou782/mtc/Module_3/T3_3_Matrix_rotation/build/CMakeFiles/matrix_rotation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/matrix_rotation.dir/depend

