project(main)
add_executable(BoidsSDL main.cpp)
target_link_libraries(BoidsSDL ${SDL2_LIBRARY})
install(TARGETS BoidsSDL RUNTIME DESTINATION ${BIN_DIR})