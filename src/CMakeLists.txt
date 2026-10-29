# Core runtime + generated translation + platform layer.

set(GENERATED_DIR "${CMAKE_SOURCE_DIR}/generated")

# The translator emits one functions_NN.c per chunk (and no monolithic
# functions.c).  Keep a fallback for an older generated tree.
file(GLOB GENERATED_CHUNKS CONFIGURE_DEPENDS "${GENERATED_DIR}/functions_*.c")
if(GENERATED_CHUNKS)
  set(GENERATED_FUNCTION_SOURCES ${GENERATED_CHUNKS})
else()
  set(GENERATED_FUNCTION_SOURCES "${GENERATED_DIR}/functions.c")
endif()

add_library(asphalt5_core STATIC
  core/guest.c
  core/imports.c
  core/jni.c
  platform/win32.c
  platform/audio.c
  platform/stb_vorbis.c
  platform/movie.c
  gl/gl_globals.c
  gl/gl_state.c
  gl/gl_matrix.c
  gl/gl_texture.c
  gl/gl_light.c
  gl/gl_arrays.c
  gl/gl_draw.c
  gl/gl_query.c
  gl/gl_capture.c
  gl/gl_diag.c
  gl/gl_dispatch.c
  ${GENERATED_FUNCTION_SOURCES}
  "${GENERATED_DIR}/table.c"
  "${GENERATED_DIR}/imports_gen.c"
  "${GENERATED_DIR}/plt_table.c"
)

target_include_directories(asphalt5_core PUBLIC
  "${CMAKE_CURRENT_SOURCE_DIR}"
  "${CMAKE_CURRENT_SOURCE_DIR}/core"
  "${CMAKE_CURRENT_SOURCE_DIR}/gl"
  "${GENERATED_DIR}"
)

set(ASPHALT5_WARNINGS
  -O1 -g -fno-strict-aliasing -fwrapv -Wall -Wextra
  -Wno-unused-parameter -Wno-unused-variable -Wno-unused-but-set-variable
  -Wno-unused-label -Wno-unused-value
)

target_compile_options(asphalt5_core PRIVATE ${ASPHALT5_WARNINGS})
target_link_libraries(asphalt5_core PUBLIC
  ws2_32 opengl32 winmm user32 gdi32 m
  mfreadwrite mfplat mfuuid ole32 uuid)

# Console development tool: crc32 oracle, matrix tests, boot with logs.
add_executable(asphalt5 main.c)
target_link_libraries(asphalt5 PRIVATE asphalt5_core)
target_compile_options(asphalt5 PRIVATE ${ASPHALT5_WARNINGS})
set_target_properties(asphalt5 PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
)

# Normal double-clickable game executable (Windows GUI subsystem, no console).
# It is written to the repository root so the portable data folders
# (assets/, original/) are found via the executable's working directory.
add_executable(Asphalt5Game WIN32 main.c)
target_link_libraries(Asphalt5Game PRIVATE asphalt5_core)
target_compile_definitions(Asphalt5Game PRIVATE RECOMP_GUI)
target_compile_options(Asphalt5Game PRIVATE ${ASPHALT5_WARNINGS})
set_target_properties(Asphalt5Game PROPERTIES
  OUTPUT_NAME "Asphalt5"
  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}"
)

# Headless regression tests (CTest).
add_test(NAME crc COMMAND $<TARGET_FILE:asphalt5> crc)
set_tests_properties(crc PROPERTIES
  PASS_REGULAR_EXPRESSION "cbf43926"
  SKIP_RETURN_CODE 77
  WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}"
)
add_test(NAME mtxtest COMMAND $<TARGET_FILE:asphalt5> mtxtest)
set_tests_properties(mtxtest PROPERTIES
  SKIP_RETURN_CODE 77
  WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}"
)
