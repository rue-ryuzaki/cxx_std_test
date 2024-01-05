if (${CMAKE_VERSION} VERSION_LESS "3.12")
    cmake_minimum_required(VERSION 3.0)
else()
    cmake_minimum_required(VERSION 3.0...3.12)
endif()

project("cxx_std_test"
    LANGUAGES CXX
)

if (NOT CMAKE_CXX_STANDARD)
    set(CMAKE_CXX_STANDARD 11)
endif()
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

message("build standard: C++${CMAKE_CXX_STANDARD}")

enable_testing()
add_subdirectory(tests)