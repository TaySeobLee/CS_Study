include(FetchContent)

# Catch2 v3 (단일 헤더 아님)
FetchContent_Declare(
  catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v3.6.0
)
FetchContent_MakeAvailable(catch2)

file(GLOB_RECURSE TEST_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_executable(cs_tests
    ${TEST_SOURCES}
)

target_link_libraries(cs_tests
    PRIVATE
      example
      Catch2::Catch2WithMain
)

include(CTest)
include(Catch)
catch_discover_tests(cs_tests)
