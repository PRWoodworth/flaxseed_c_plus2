cmake_minimum_required(VERSION 3.25)
project(example)

find_package(PkgConfig)

pkg_check_modules(GTKMM gtkmm-4.0) # look into FindPkgConfig.cmake, 
                                                                # it contains documentation
# Now the variables GTKMM_INCLUDE_DIRS, GTKMM_LIBRARY_DIRS and GTKMM_LIBRARIES 
# contain what you expect 

add_subdirectory(src) 