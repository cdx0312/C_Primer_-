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
CMAKE_SOURCE_DIR = /home/cdx/CLionProjects/Nine_multifile

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cdx/CLionProjects/Nine_multifile/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Nine_multifile.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Nine_multifile.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Nine_multifile.dir/flags.make

CMakeFiles/Nine_multifile.dir/main.c.o: CMakeFiles/Nine_multifile.dir/flags.make
CMakeFiles/Nine_multifile.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cdx/CLionProjects/Nine_multifile/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Nine_multifile.dir/main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Nine_multifile.dir/main.c.o   -c /home/cdx/CLionProjects/Nine_multifile/main.c

CMakeFiles/Nine_multifile.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Nine_multifile.dir/main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/cdx/CLionProjects/Nine_multifile/main.c > CMakeFiles/Nine_multifile.dir/main.c.i

CMakeFiles/Nine_multifile.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Nine_multifile.dir/main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/cdx/CLionProjects/Nine_multifile/main.c -o CMakeFiles/Nine_multifile.dir/main.c.s

CMakeFiles/Nine_multifile.dir/main.c.o.requires:

.PHONY : CMakeFiles/Nine_multifile.dir/main.c.o.requires

CMakeFiles/Nine_multifile.dir/main.c.o.provides: CMakeFiles/Nine_multifile.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/Nine_multifile.dir/build.make CMakeFiles/Nine_multifile.dir/main.c.o.provides.build
.PHONY : CMakeFiles/Nine_multifile.dir/main.c.o.provides

CMakeFiles/Nine_multifile.dir/main.c.o.provides.build: CMakeFiles/Nine_multifile.dir/main.c.o


CMakeFiles/Nine_multifile.dir/hotel.c.o: CMakeFiles/Nine_multifile.dir/flags.make
CMakeFiles/Nine_multifile.dir/hotel.c.o: ../hotel.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cdx/CLionProjects/Nine_multifile/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Nine_multifile.dir/hotel.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Nine_multifile.dir/hotel.c.o   -c /home/cdx/CLionProjects/Nine_multifile/hotel.c

CMakeFiles/Nine_multifile.dir/hotel.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Nine_multifile.dir/hotel.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/cdx/CLionProjects/Nine_multifile/hotel.c > CMakeFiles/Nine_multifile.dir/hotel.c.i

CMakeFiles/Nine_multifile.dir/hotel.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Nine_multifile.dir/hotel.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/cdx/CLionProjects/Nine_multifile/hotel.c -o CMakeFiles/Nine_multifile.dir/hotel.c.s

CMakeFiles/Nine_multifile.dir/hotel.c.o.requires:

.PHONY : CMakeFiles/Nine_multifile.dir/hotel.c.o.requires

CMakeFiles/Nine_multifile.dir/hotel.c.o.provides: CMakeFiles/Nine_multifile.dir/hotel.c.o.requires
	$(MAKE) -f CMakeFiles/Nine_multifile.dir/build.make CMakeFiles/Nine_multifile.dir/hotel.c.o.provides.build
.PHONY : CMakeFiles/Nine_multifile.dir/hotel.c.o.provides

CMakeFiles/Nine_multifile.dir/hotel.c.o.provides.build: CMakeFiles/Nine_multifile.dir/hotel.c.o


# Object files for target Nine_multifile
Nine_multifile_OBJECTS = \
"CMakeFiles/Nine_multifile.dir/main.c.o" \
"CMakeFiles/Nine_multifile.dir/hotel.c.o"

# External object files for target Nine_multifile
Nine_multifile_EXTERNAL_OBJECTS =

Nine_multifile: CMakeFiles/Nine_multifile.dir/main.c.o
Nine_multifile: CMakeFiles/Nine_multifile.dir/hotel.c.o
Nine_multifile: CMakeFiles/Nine_multifile.dir/build.make
Nine_multifile: CMakeFiles/Nine_multifile.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cdx/CLionProjects/Nine_multifile/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Nine_multifile"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Nine_multifile.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Nine_multifile.dir/build: Nine_multifile

.PHONY : CMakeFiles/Nine_multifile.dir/build

CMakeFiles/Nine_multifile.dir/requires: CMakeFiles/Nine_multifile.dir/main.c.o.requires
CMakeFiles/Nine_multifile.dir/requires: CMakeFiles/Nine_multifile.dir/hotel.c.o.requires

.PHONY : CMakeFiles/Nine_multifile.dir/requires

CMakeFiles/Nine_multifile.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Nine_multifile.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Nine_multifile.dir/clean

CMakeFiles/Nine_multifile.dir/depend:
	cd /home/cdx/CLionProjects/Nine_multifile/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cdx/CLionProjects/Nine_multifile /home/cdx/CLionProjects/Nine_multifile /home/cdx/CLionProjects/Nine_multifile/cmake-build-debug /home/cdx/CLionProjects/Nine_multifile/cmake-build-debug /home/cdx/CLionProjects/Nine_multifile/cmake-build-debug/CMakeFiles/Nine_multifile.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Nine_multifile.dir/depend

