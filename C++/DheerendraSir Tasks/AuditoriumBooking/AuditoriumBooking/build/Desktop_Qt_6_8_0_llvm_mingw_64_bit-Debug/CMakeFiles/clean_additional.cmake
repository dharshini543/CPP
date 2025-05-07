# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "AuditoriumBooking_autogen"
  "CMakeFiles\\AuditoriumBooking_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\AuditoriumBooking_autogen.dir\\ParseCache.txt"
  )
endif()
