if (NOT WIN32)
  set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Wfatal-errors")
  set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-rtti")
endif()

add_compile_options($<$<AND:$<CONFIG:Release>,$<CXX_COMPILER_ID:GNU>,$<C_COMPILER_ID:GNU>>:-s>)

if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} --no-gnu-unique")
endif()

if (MSVC)
  add_compile_options(/MP)
endif()

add_library(TCSMOBJ OBJECT "")
set_target_properties(TCSMOBJ PROPERTIES CXX_VISIBILITY_PRESET hidden C_VISIBILITY_PRESET hidden)
if (WIN32)
  target_compile_definitions(TCSMOBJ PUBLIC NOMINMAX)
endif()

set_target_properties(TCSMOBJ PROPERTIES POSITION_INDEPENDENT_CODE ON)
target_precompile_headers(TCSMOBJ PRIVATE pch.h)
target_include_directories(TCSMOBJ PUBLIC .)
target_include_directories(TCSMOBJ PUBLIC ../Dependencies)

if (NOT WIN32)
  target_link_libraries(TCSMOBJ PRIVATE ${CMAKE_DL_LIBS})
  target_compile_options(TCSMOBJ PRIVATE -flto)
  target_link_options(TCSMOBJ PUBLIC -flto LINKER:--no-undefined)
else()
  target_compile_definitions(TCSMOBJ PRIVATE _USE_MATH_DEFINES)
  target_compile_options(TCSMOBJ PRIVATE /utf-8)
  target_link_libraries(TCSMOBJ PRIVATE ntdll)
  add_subdirectory(Resources/Shaders)
  add_dependencies(TCSMOBJ Shaders)
endif()

add_library(TCSM SHARED TCSM.cpp)
target_link_libraries(TCSM PUBLIC TCSMOBJ)

if (NOT WIN32)
  target_link_options(TCSM PRIVATE -flto)
else()
  target_link_options(TCSM PRIVATE /ENTRY:DllEntryPoint)
endif()

target_sources(TCSMOBJ PRIVATE
  Config.cpp
  ConfigStructs.cpp
  Endpoints.cpp
  EventListener.cpp
  GameData.cpp
  GlobalContext.cpp
  GUI.cpp
  Helpers.cpp
  Hooks.cpp
  imguiCustom.cpp
  InputUtil.cpp
  Memory.cpp
  Netvars.cpp
  Texture.cpp
)

add_subdirectory(CSGO)
add_subdirectory(Hacks)
add_subdirectory(Helpers)
add_subdirectory(Hooks)
add_subdirectory(InventoryChanger)
add_subdirectory(MemorySearch)
add_subdirectory(RetSpoof)
