# thread support
find_package(Threads REQUIRED)

# Enable CMake ExternalProject module
include(ExternalProject)

# Download and install GoogleTest
ExternalProject_Add(
  gtest
  URL  https://github.com/google/googletest/archive/master.zip
  PREFIX ${CMAKE_CURRENT_BINARY_DIR}/gtest
  # Disable install step
  INSTALL_COMMAND ""
)

# Get GTest source and binary directories from CMake project
ExternalProject_Get_Property(gtest source_dir binary_dir)

# create a libgtest target to be used as a dependency by test prog
add_library(libgtest IMPORTED STATIC GLOBAL)

add_dependencies(libgtest gtest)


# set libgtest properties
set_target_properties(libgtest PROPERTIES
  "IMPORTED_LOCATION" "${binary_dir}/googlemock/gtest/libgtest.a"
  "IMPORTED_LINK_INTERFACE_LIBRARIES" "${CMAKE_THREAD_LIBS_INIT}"
)


# create a libgmock target to be used as a dependency by test prog
add_library(libgmock IMPORTED STATIC GLOBAL)
add_dependencies(libgmock gtest)


# set libgmock properties
set_target_properties(libgmock PROPERTIES
  "IMPORTED_LOCATION" "${binary_dir}/googlemock/libgmock.a"
  "IMPORTED_LINK_INTERFACE_LIBRARIES" "${CMAKE_THREAD_LIBS_INIT}"
)

# https://github.com/kaizouman/gtest-cmake-example/blob/master/test/CMakeLists.txt
# mentioned he could not make it work with INTERFACE_INCLUDE_DIRECTORIES
include_directories("${source_dir}/googletest/include"
                    "${source_dir}/googlemock/include"
)

add_subdirectory(testfoo)