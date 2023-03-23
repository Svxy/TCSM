target_sources(TCSMOBJ PRIVATE
  VmtSwap.cpp
)

if (WIN32)
  target_sources(TCSMOBJ PRIVATE
    MinHook.cpp
    VmtHook.cpp
  )
endif()
