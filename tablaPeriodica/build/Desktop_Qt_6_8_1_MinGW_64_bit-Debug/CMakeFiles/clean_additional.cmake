# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\tablaPeriodica_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\tablaPeriodica_autogen.dir\\ParseCache.txt"
  "tablaPeriodica_autogen"
  )
endif()
