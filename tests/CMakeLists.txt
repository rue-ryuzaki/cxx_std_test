file(GLOB files "unit-*.cpp")
foreach(file ${files})
    get_filename_component(file_basename ${file} NAME_WE)
    string(REGEX REPLACE "unit-([^$]+)" "test-\\1" testcase ${file_basename})

    add_executable(${testcase} ${file})
    target_compile_definitions(${testcase} PRIVATE CXX_STANDARD=${CMAKE_CXX_STANDARD})
    add_test(${testcase} ${testcase})
endforeach()