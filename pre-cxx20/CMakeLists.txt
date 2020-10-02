project(pre-cxx20)

file(GLOB test_cpps "test-*.cpp")
foreach(test_cpp IN LISTS test_cpps)
    get_filename_component(test_exe ${test_cpp} NAME_WE)
    add_executable(${test_exe} ${test_cpp})
    target_link_libraries(${test_exe} PUBLIC Boost::boost Boost::pfr Boost::system)
endforeach()
