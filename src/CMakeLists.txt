add_library(example STATIC
    example/example.cpp
)

target_include_directories(example PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(person_test main.cpp classes/Person.cpp)

# Person 클래스가 정의된 경로를 포함
target_include_directories(person_test PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
