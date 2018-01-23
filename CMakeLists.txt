cmake_minimum_required(VERSION 3.8)
project(modern_cpp)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES src/main.cpp src/using.h src/auto.h src/bind.h src/coding.h src/constexpr.h src/deduction_guide.h src/emplace.h src/for.h src/initialize_list.h src/lambda.h src/string_view.h src/tuple.h src/using.h src/for_each.h src/move.h src/atomic.h src/file_system.h src/random.h src/smart_ptr.h)
add_executable(modern_cpp ${SOURCE_FILES})

target_link_libraries(modern_cpp)
