add_library(sceolang
  impl/Kokkos_Profiling.cpp	
  impl/Kokkos_Command_Line_Parsing.cpp	
)
target_include_directories(sceolang PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_definitions(sceolang PUBLIC -DKOKKOS_TOOLS_INDEPENDENT_BUILD)
add_executable(sceolang_test
  test.cpp)

target_link_libraries(sceolang_test sceolang)
