# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/cdx/Downloads/clion-2017.1.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/cdx/Downloads/clion-2017.1.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cdx/CLionProjects/CTest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cdx/CLionProjects/CTest/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CTest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CTest.dir/flags.make

CMakeFiles/CTest.dir/rhodium.c.o: CMakeFiles/CTest.dir/flags.make
CMakeFiles/CTest.dir/rhodium.c.o: ../rhodium.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cdx/CLionProjects/CTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CTest.dir/rhodium.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CTest.dir/rhodium.c.o   -c /home/cdx/CLionProjects/CTest/rhodium.c

CMakeFiles/CTest.dir/rhodium.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CTest.dir/rhodium.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/cdx/CLionProjects/CTest/rhodium.c > CMakeFiles/CTest.dir/rhodium.c.i

CMakeFiles/CTest.dir/rhodium.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CTest.dir/rhodium.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/cdx/CLionProjects/CTest/rhodium.c -o CMakeFiles/CTest.dir/rhodium.c.s

CMakeFiles/CTest.dir/rhodium.c.o.requires:

.PHONY : CMakeFiles/CTest.dir/rhodium.c.o.requires

CMakeFiles/CTest.dir/rhodium.c.o.provides: CMakeFiles/CTest.dir/rhodium.c.o.requires
	$(MAKE) -f CMakeFiles/CTest.dir/build.make CMakeFiles/CTest.dir/rhodium.c.o.provides.build
.PHONY : CMakeFiles/CTest.dir/rhodium.c.o.provides

CMakeFiles/CTest.dir/rhodium.c.o.provides.build: CMakeFiles/CTest.dir/rhodium.c.o


# Object files for target CTest
CTest_OBJECTS = \
"CMakeFiles/CTest.dir/rhodium.c.o"

# External object files for target CTest
CTest_EXTERNAL_OBJECTS =

CTest: CMakeFiles/CTest.dir/rhodium.c.o
CTest: CMakeFiles/CTest.dir/build.make
CTest: CMakeFiles/CTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cdx/CLionProjects/CTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable CTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CTest.dir/build: CTest

.PHONY : CMakeFiles/CTest.dir/build

CMakeFiles/CTest.dir/requires: CMakeFiles/CTest.dir/rhodium.c.o.requires

.PHONY : CMakeFiles/CTest.dir/requires

CMakeFiles/CTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CTest.dir/clean

CMakeFiles/CTest.dir/depend:
	cd /home/cdx/CLionProjects/CTest/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cdx/CLionProjects/CTest /home/cdx/CLionProjects/CTest /home/cdx/CLionProjects/CTest/cmake-build-debug /home/cdx/CLionProjects/CTest/cmake-build-debug /home/cdx/CLionProjects/CTest/cmake-build-debug/CMakeFiles/CTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CTest.dir/depend
