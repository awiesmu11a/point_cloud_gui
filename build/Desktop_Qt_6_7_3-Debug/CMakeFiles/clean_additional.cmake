# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/murano-point-cloud_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/murano-point-cloud_autogen.dir/ParseCache.txt"
  "murano-point-cloud_autogen"
  )
endif()
