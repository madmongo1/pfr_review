project(pre-cxx20)

add_executable(test-1 test-1.cpp)
target_link_libraries(test-1 PUBLIC Boost::boost Boost::pfr Boost::system)
