cmake_minimum_required(VERSION 3.10.2)

project(MultipleInputsOfDifferentType)

find_package(ITK REQUIRED)
include(${ITK_USE_FILE})


add_executable(MultipleInputsOfDifferentType Code.cxx)
target_link_libraries(MultipleInputsOfDifferentType ${ITK_LIBRARIES})

install(TARGETS MultipleInputsOfDifferentType
  DESTINATION bin/ITKExamples/Core/Common
  COMPONENT Runtime
  )

install(FILES Code.cxx CMakeLists.txt
  DESTINATION share/ITKExamples/Code/Core/Common/MultipleInputsOfDifferentType/
  COMPONENT Code
  )


enable_testing()
add_test(NAME MultipleInputsOfDifferentTypeTest
  COMMAND ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/MultipleInputsOfDifferentType)

