add_subdirectory(imgui)

if (WIN32)
  add_subdirectory(freetype)
  add_subdirectory(MinHook)

  target_compile_definitions(TCSMOBJ PRIVATE NOMINMAX)
endif()

target_include_directories(TCSMOBJ PUBLIC range-v3)
