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
CMAKE_SOURCE_DIR = /home/cdx/CLionProjects/16/subst

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cdx/CLionProjects/16/subst/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/subst.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/subst.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/subst.dir/flags.make

CMakeFiles/subst.dir/main.c.o: CMakeFiles/subst.dir/flags.make
CMakeFiles/subst.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cdx/CLionProjects/16/subst/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/subst.dir/main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/subst.dir/main.c.o   -c /home/cdx/CLionProjects/16/subst/main.c

CMakeFiles/subst.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/subst.dir/main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/cdx/CLionProjects/16/subst/main.c > CMakeFiles/subst.dir/main.c.i

CMakeFiles/subst.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/subst.dir/main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/cdx/CLionProjects/16/subst/main.c -o CMakeFiles/subst.dir/main.c.s

CMakeFiles/subst.dir/main.c.o.requires:

.PHONY : CMakeFiles/subst.dir/main.c.o.requires

CMakeFiles/subst.dir/main.c.o.provides: CMakeFiles/subst.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/subst.dir/build.make CMakeFiles/subst.dir/main.c.o.provides.build
.PHONY : CMakeFiles/subst.dir/main.c.o.provides

CMakeFiles/subst.dir/main.c.o.provides.build: CMakeFiles/subst.dir/main.c.o


# Object files for target subst
subst_OBJECTS = \
"CMakeFiles/subst.dir/main.c.o"

# External object files for target subst
subst_EXTERNAL_OBJECTS =

subst: CMakeFiles/subst.dir/main.c.o
subst: CMakeFiles/subst.dir/build.make
subst: CMakeFiles/subst.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cdx/CLionProjects/16/subst/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable subst"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/subst.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/subst.dir/build: subst

.PHONY : CMakeFiles/subst.dir/build

CMakeFiles/subst.dir/requires: CMakeFiles/subst.dir/main.c.o.requires

.PHONY : CMakeFiles/subst.dir/requires

CMakeFiles/subst.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/subst.dir/cmake_clean.cmake
.PHONY : CMakeFiles/subst.dir/clean

CMakeFiles/subst.dir/depend:
	cd /home/cdx/CLionProjects/16/subst/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cdx/CLionProjects/16/subst /home/cdx/CLionProjects/16/subst /home/cdx/CLionProjects/16/subst/cmake-build-debug /home/cdx/CLionProjects/16/subst/cmake-build-debug /home/cdx/CLionProjects/16/subst/cmake-build-debug/CMakeFiles/subst.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/subst.dir/depend

