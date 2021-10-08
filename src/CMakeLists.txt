set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE ON)
find_package(OpenCV 4.5.3 REQUIRED) 
INCLUDE_DIRECTORIES(${OpenCV_INCLUDE_DIRS})
message(${OpenCV_INCLUDE_DIRS})
set(sources ${sources}
	histogram_eq.cpp

	)
add_library(image_lib ${sources})
add_executable(image_process main.cpp)
target_link_libraries(image_process image_lib ${OpenCV_LIBS} )


