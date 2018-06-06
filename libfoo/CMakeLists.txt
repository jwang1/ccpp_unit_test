set(libfoo_SRCS
        foo.h
        foo.cpp
        ibar.h)

# declare the lib
add_library(libfoo STATIC
        ${libfoo_SRCS}
        )

#specify include dir exported by this lib
target_include_directories(libfoo  PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        )