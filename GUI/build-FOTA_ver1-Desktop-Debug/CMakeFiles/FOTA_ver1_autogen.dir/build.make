# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_SOURCE_DIR = /home/islam_pi/GUI/FOTA_ver1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug

# Utility rule file for FOTA_ver1_autogen.

# Include the progress variables for this target.
include CMakeFiles/FOTA_ver1_autogen.dir/progress.make

CMakeFiles/FOTA_ver1_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target FOTA_ver1"
	/usr/bin/cmake -E cmake_autogen /home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug/CMakeFiles/FOTA_ver1_autogen.dir/AutogenInfo.json Debug

FOTA_ver1_autogen: CMakeFiles/FOTA_ver1_autogen
FOTA_ver1_autogen: CMakeFiles/FOTA_ver1_autogen.dir/build.make

.PHONY : FOTA_ver1_autogen

# Rule to build all files generated by this target.
CMakeFiles/FOTA_ver1_autogen.dir/build: FOTA_ver1_autogen

.PHONY : CMakeFiles/FOTA_ver1_autogen.dir/build

CMakeFiles/FOTA_ver1_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FOTA_ver1_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FOTA_ver1_autogen.dir/clean

CMakeFiles/FOTA_ver1_autogen.dir/depend:
	cd /home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/islam_pi/GUI/FOTA_ver1 /home/islam_pi/GUI/FOTA_ver1 /home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug /home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug /home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug/CMakeFiles/FOTA_ver1_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FOTA_ver1_autogen.dir/depend

