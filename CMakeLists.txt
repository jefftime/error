cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)
project(error LANGUAGES C)

# Library
add_library(error INTERFACE)
target_include_directories(error INTERFACE "./include")
