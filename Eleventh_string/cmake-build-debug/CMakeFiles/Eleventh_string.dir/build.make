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
CMAKE_SOURCE_DIR = /home/cdx/CLionProjects/Eleventh_string

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cdx/CLionProjects/Eleventh_string/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Eleventh_string.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Eleventh_string.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Eleventh_string.dir/flags.make

CMakeFiles/Eleventh_string.dir/main.c.o: CMakeFiles/Eleventh_string.dir/flags.make
CMakeFiles/Eleventh_string.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cdx/CLionProjects/Eleventh_string/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Eleventh_string.dir/main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Eleventh_string.dir/main.c.o   -c /home/cdx/CLionProjects/Eleventh_string/main.c

CMakeFiles/Eleventh_string.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Eleventh_string.dir/main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/cdx/CLionProjects/Eleventh_string/main.c > CMakeFiles/Eleventh_string.dir/main.c.i

CMakeFiles/Eleventh_string.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Eleventh_string.dir/main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/cdx/CLionProjects/Eleventh_string/main.c -o CMakeFiles/Eleventh_string.dir/main.c.s

CMakeFiles/Eleventh_string.dir/main.c.o.requires:

.PHONY : CMakeFiles/Eleventh_string.dir/main.c.o.requires

CMakeFiles/Eleventh_string.dir/main.c.o.provides: CMakeFiles/Eleventh_string.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/Eleventh_string.dir/build.make CMakeFiles/Eleventh_string.dir/main.c.o.provides.build
.PHONY : CMakeFiles/Eleventh_string.dir/main.c.o.provides

CMakeFiles/Eleventh_string.dir/main.c.o.provides.build: CMakeFiles/Eleventh_string.dir/main.c.o


# Object files for target Eleventh_string
Eleventh_string_OBJECTS = \
"CMakeFiles/Eleventh_string.dir/main.c.o"

# External object files for target Eleventh_string
Eleventh_string_EXTERNAL_OBJECTS =

Eleventh_string: CMakeFiles/Eleventh_string.dir/main.c.o
Eleventh_string: CMakeFiles/Eleventh_string.dir/build.make
Eleventh_string: CMakeFiles/Eleventh_string.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cdx/CLionProjects/Eleventh_string/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Eleventh_string"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Eleventh_string.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Eleventh_string.dir/build: Eleventh_string

.PHONY : CMakeFiles/Eleventh_string.dir/build

CMakeFiles/Eleventh_string.dir/requires: CMakeFiles/Eleventh_string.dir/main.c.o.requires

.PHONY : CMakeFiles/Eleventh_string.dir/requires

CMakeFiles/Eleventh_string.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Eleventh_string.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Eleventh_string.dir/clean

CMakeFiles/Eleventh_string.dir/depend:
	cd /home/cdx/CLionProjects/Eleventh_string/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cdx/CLionProjects/Eleventh_string /home/cdx/CLionProjects/Eleventh_string /home/cdx/CLionProjects/Eleventh_string/cmake-build-debug /home/cdx/CLionProjects/Eleventh_string/cmake-build-debug /home/cdx/CLionProjects/Eleventh_string/cmake-build-debug/CMakeFiles/Eleventh_string.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Eleventh_string.dir/depend

