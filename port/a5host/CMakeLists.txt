cmake_minimum_required(VERSION 3.20)
project(Asphalt5Host C)

# Incremental build: only the changed .c files recompile.  a5host.c is the big
# translation unit (it pulls in autogens.inc), so keeping it separate from
# input.c / a5gl.c / audio.c makes input and renderer iterations fast.
set(CMAKE_C_STANDARD 11)
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release CACHE STRING "" FORCE)
endif()

# Dev vs release optimization for the giant a5host.c TU (autogens.inc).
#   fast    -O1  (~100 s full build, slightly slower runtime)
#   release -O2  (~175 s full build, shipped binary)
# ccache (if present) caches both variants so switching is nearly free.
option(A5_FASTBUILD "Dev build: -O1 for the huge translation unit" OFF)
option(A5_GUI "Build the release Windows GUI-subsystem host (no console)" OFF)
if(A5_FASTBUILD)
    set(A5_OPT -O1)
else()
    set(A5_OPT -O2)
endif()
find_program(CCACHE_EXE ccache)
if(CCACHE_EXE)
    set(CMAKE_C_COMPILER_LAUNCHER "${CCACHE_EXE}")
    message(STATUS "ccache enabled: ${CCACHE_EXE}")
endif()

set(AUTOGEN_CHUNKS
    src/host/autogen_part_00.c
    src/host/autogen_part_01.c
    src/host/autogen_part_02.c
    src/host/autogen_part_03.c
    src/host/autogen_part_04.c
    src/host/autogen_part_05.c
    src/host/autogen_part_06.c
    src/host/autogen_part_07.c
    src/host/autogen_part_08.c
    src/host/autogen_part_09.c
    src/host/autogen_part_10.c
    src/host/autogen_part_11.c
)

add_executable(a5host
    src/host/a5host.c
    src/host/autogen_part_00.c
    src/host/autogen_part_01.c
    src/host/autogen_part_02.c
    src/host/autogen_part_03.c
    src/host/autogen_part_04.c
    src/host/autogen_part_05.c
    src/host/autogen_part_06.c
    src/host/autogen_part_07.c
    src/host/autogen_part_08.c
    src/host/autogen_part_09.c
    src/host/autogen_part_10.c
    src/host/autogen_part_11.c
    src/host/input.c
    src/gl/a5gl.c
    src/audio/audio.c
    src/audio/stb_vorbis.c
    src/codec/pvrtc.c
    src/installer/installer.c
    src/installer/puff.c
    src/host/movie.c
)

target_include_directories(a5host PRIVATE
    src/host
    src/gl
    src/audio
    src/codec
    src/installer
)

# The FP flags are load-bearing: -ffp-contract=off keeps every multiply/add
# separate (the differential compares bit-exact against the ARM code) and
# SSE2 scalar math avoids x87 excess precision.
#
# No -g: a5host.c is a ~14 MB translation unit (autogens.inc) and debug info
# tripled its compile time; the release binary is stripped anyway and crash
# offsets are still resolvable from the .text layout.
target_compile_options(a5host PRIVATE
    ${A5_OPT} -g0 -pipe
    -ffp-contract=off
    -mfpmath=sse -msse2
    -Wno-unused-variable
)

# Release binaries are stripped: -g stays on the objects (crash addresses are
# still usable) but the .exe stays small for distribution.
target_link_options(a5host PRIVATE -s)

target_link_libraries(a5host PRIVATE
    opengl32 gdi32 user32 winmm ws2_32
    mfplat mfreadwrite mfuuid ole32 uuid m
)

# Keep the exe next to the sources: make_dist.py and the run scripts expect
# port/a5host/a5host.exe.
if(A5_GUI)
    target_sources(a5host PRIVATE src/host/winmain.c)
    set_target_properties(a5host PROPERTIES
        WIN32_EXECUTABLE TRUE
        OUTPUT_NAME "a5host_gui"
    )
endif()

set_target_properties(a5host PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
)
