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
CMAKE_SOURCE_DIR = /home/cdx/CLionProjects/14/booksave

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cdx/CLionProjects/14/booksave/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/booksave.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/booksave.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/booksave.dir/flags.make

CMakeFiles/booksave.dir/main.c.o: CMakeFiles/booksave.dir/flags.make
CMakeFiles/booksave.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cdx/CLionProjects/14/booksave/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/booksave.dir/main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/booksave.dir/main.c.o   -c /home/cdx/CLionProjects/14/booksave/main.c

CMakeFiles/booksave.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/booksave.dir/main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/cdx/CLionProjects/14/booksave/main.c > CMakeFiles/booksave.dir/main.c.i

CMakeFiles/booksave.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/booksave.dir/main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/cdx/CLionProjects/14/booksave/main.c -o CMakeFiles/booksave.dir/main.c.s

CMakeFiles/booksave.dir/main.c.o.requires:

.PHONY : CMakeFiles/booksave.dir/main.c.o.requires

CMakeFiles/booksave.dir/main.c.o.provides: CMakeFiles/booksave.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/booksave.dir/build.make CMakeFiles/booksave.dir/main.c.o.provides.build
.PHONY : CMakeFiles/booksave.dir/main.c.o.provides

CMakeFiles/booksave.dir/main.c.o.provides.build: CMakeFiles/booksave.dir/main.c.o


# Object files for target booksave
booksave_OBJECTS = \
"CMakeFiles/booksave.dir/main.c.o"

# External object files for target booksave
booksave_EXTERNAL_OBJECTS =

booksave: CMakeFiles/booksave.dir/main.c.o
booksave: CMakeFiles/booksave.dir/build.make
booksave: CMakeFiles/booksave.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cdx/CLionProjects/14/booksave/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable booksave"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/booksave.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/booksave.dir/build: booksave

.PHONY : CMakeFiles/booksave.dir/build

CMakeFiles/booksave.dir/requires: CMakeFiles/booksave.dir/main.c.o.requires

.PHONY : CMakeFiles/booksave.dir/requires

CMakeFiles/booksave.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/booksave.dir/cmake_clean.cmake
.PHONY : CMakeFiles/booksave.dir/clean

CMakeFiles/booksave.dir/depend:
	cd /home/cdx/CLionProjects/14/booksave/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cdx/CLionProjects/14/booksave /home/cdx/CLionProjects/14/booksave /home/cdx/CLionProjects/14/booksave/cmake-build-debug /home/cdx/CLionProjects/14/booksave/cmake-build-debug /home/cdx/CLionProjects/14/booksave/cmake-build-debug/CMakeFiles/booksave.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/booksave.dir/depend

