cmake_minimum_required (VERSION 2.8)
project (googlemock_example)

add_executable(order order.cpp)
target_link_libraries(order gmock)
target_link_libraries(order gtest)
target_link_libraries(order pthread)
