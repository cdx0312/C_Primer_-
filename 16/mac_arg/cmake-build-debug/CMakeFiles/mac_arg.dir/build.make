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
CMAKE_SOURCE_DIR = /home/cdx/CLionProjects/16/mac_arg

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cdx/CLionProjects/16/mac_arg/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/mac_arg.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mac_arg.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mac_arg.dir/flags.make

CMakeFiles/mac_arg.dir/main.c.o: CMakeFiles/mac_arg.dir/flags.make
CMakeFiles/mac_arg.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cdx/CLionProjects/16/mac_arg/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/mac_arg.dir/main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/mac_arg.dir/main.c.o   -c /home/cdx/CLionProjects/16/mac_arg/main.c

CMakeFiles/mac_arg.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mac_arg.dir/main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/cdx/CLionProjects/16/mac_arg/main.c > CMakeFiles/mac_arg.dir/main.c.i

CMakeFiles/mac_arg.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mac_arg.dir/main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/cdx/CLionProjects/16/mac_arg/main.c -o CMakeFiles/mac_arg.dir/main.c.s

CMakeFiles/mac_arg.dir/main.c.o.requires:

.PHONY : CMakeFiles/mac_arg.dir/main.c.o.requires

CMakeFiles/mac_arg.dir/main.c.o.provides: CMakeFiles/mac_arg.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/mac_arg.dir/build.make CMakeFiles/mac_arg.dir/main.c.o.provides.build
.PHONY : CMakeFiles/mac_arg.dir/main.c.o.provides

CMakeFiles/mac_arg.dir/main.c.o.provides.build: CMakeFiles/mac_arg.dir/main.c.o


# Object files for target mac_arg
mac_arg_OBJECTS = \
"CMakeFiles/mac_arg.dir/main.c.o"

# External object files for target mac_arg
mac_arg_EXTERNAL_OBJECTS =

mac_arg: CMakeFiles/mac_arg.dir/main.c.o
mac_arg: CMakeFiles/mac_arg.dir/build.make
mac_arg: CMakeFiles/mac_arg.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cdx/CLionProjects/16/mac_arg/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable mac_arg"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mac_arg.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mac_arg.dir/build: mac_arg

.PHONY : CMakeFiles/mac_arg.dir/build

CMakeFiles/mac_arg.dir/requires: CMakeFiles/mac_arg.dir/main.c.o.requires

.PHONY : CMakeFiles/mac_arg.dir/requires

CMakeFiles/mac_arg.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mac_arg.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mac_arg.dir/clean

CMakeFiles/mac_arg.dir/depend:
	cd /home/cdx/CLionProjects/16/mac_arg/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cdx/CLionProjects/16/mac_arg /home/cdx/CLionProjects/16/mac_arg /home/cdx/CLionProjects/16/mac_arg/cmake-build-debug /home/cdx/CLionProjects/16/mac_arg/cmake-build-debug /home/cdx/CLionProjects/16/mac_arg/cmake-build-debug/CMakeFiles/mac_arg.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mac_arg.dir/depend

