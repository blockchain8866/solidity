add_library(z3wrapper STATIC wrapper.cpp Z3Loader.cpp)
target_include_directories(z3wrapper SYSTEM PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(z3wrapper PUBLIC ${CMAKE_DL_LIBS})
