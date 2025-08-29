link_directories(
    ${GTKMM_LIBRARY_DIRS}  )

include_directories(
    ${GTKMM_INCLUDE_DIRS}  )

add_executable(example # name of the executable on Windows will be example.exe 
    main.cc 
    example_window.cc
    example_window.h
    color_code.h 
    constants.h )

target_link_libraries(example 
    ${GTKMM_LIBRARIES}  )