
# OPENGLES_FOUND
# OPENGLES_INCLUDE_DIR
# OPENGLES_LIBRARY

include(FindPackageHandleStandardArgs)

find_path(OPENGLES_INCLUDE_DIR NAMES GLES2/gl2.h GLES3/gl3.h
    PATHS
    /usr/include
    /usr/local/include
    /sw/include
    /opt/local/include
    DOC "The directory where GLES/gl.h resides")


find_library(OPENGLES_LIBRARY
    NAMES GLES gles GLESv2
    PATHS
    /usr/lib/x86_64-linux-gnu/
    /usr/lib64
    /usr/local/lib64
    /sw/lib64
    /opt/local/lib64
    /usr/lib
    /usr/local/lib
    /sw/lib
    /opt/local/lib
    DOC "The GLES library")
    
message(STATUS "OpenGL ES Library: ${OPENGLES_LIBRARY}")

find_package_handle_standard_args(OPENGLES REQUIRED_VARS OPENGLES_INCLUDE_DIR OPENGLES_LIBRARY)
mark_as_advanced(OPENGLES_INCLUDE_DIR OPENGLES_LIBRARY)
