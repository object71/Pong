# Automatically generated by boost-vcpkg-helpers/generate-ports.ps1

vcpkg_from_github(
    OUT_SOURCE_PATH SOURCE_PATH
    REPO boostorg/lockfree
    REF boost-1.74.0
    SHA512 0464308e9ffdba982218c0d8d1684517ce54db1fd34ba6a1fca82ce56eba3e486786726b28b25d18a0f0f97880ed07fb5f25a998691ad86f99ccf58a167dc5c5
    HEAD_REF master
)

include(${CURRENT_INSTALLED_DIR}/share/boost-vcpkg-helpers/boost-modular-headers.cmake)
boost_modular_headers(SOURCE_PATH ${SOURCE_PATH})