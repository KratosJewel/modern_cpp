cmake_minimum_required(VERSION 3.8)
project(cpp1_)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp using.h auto.h bind.h coding.h constexpr.h deduction_guide.h emplace.h for.h initialize_list.h lambda.h string_view.h tuple.h using.h for_each.h move.h atomic.h file_system.h random.h smart_ptr.h)
add_executable(cpp1_ ${SOURCE_FILES})

target_link_libraries(cpp1_)