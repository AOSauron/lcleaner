cmake_minimum_required(VERSION 2.6)

project(lcleaner)

find_package(PkgConfig)
pkg_check_modules(GTKMM gtkmm-3.0)

if(NOT GTKMM_FOUND)
    message(FATAL_ERROR "gtkmm-3.0 not found!")
endif()

link_directories(
    ${GTKMM_LIBRARY_DIRS}
)
include_directories(
    ${GTKMM_INCLUDE_DIRS}
)

file(
    GLOB_RECURSE
    source_files
    ../src/*
)

add_executable(
    lcleaner
    ${source_files}
)

target_link_libraries(
    lcleaner
    ${GTKMM_LIBRARIES}
)
