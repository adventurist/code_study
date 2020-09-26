cmake_minimum_required(VERSION 2.8)
project(protoboost)
execute_process (
  COMMAND bash -c "protoc --cpp_out ${CMAKE_SOURCE_DIR}/proto  ${CMAKE_SOURCE_DIR}/include/TrxMessage.proto"
)
set(TRX_MESSAGE include/TrxMessage.pb.cc)
set(Boost_USE_STATIC_LIBS        ON)  # only find static libs
set(Boost_USE_DEBUG_LIBS         ON) # ignore debug libs and
set(Boost_USE_RELEASE_LIBS       ON)  # only find release libs
set(Boost_USE_MULTITHREADED      ON)
set(Boost_USE_STATIC_RUNTIME    OFF)
find_package(Boost REQUIRED system)
if(Boost_FOUND)
    message(STATUS "Success!")
    include_directories (SYSTEM ${Boost_INCLUDE_DIR})
endif()
find_package(Protobuf REQUIRED)
if(Protobuf_FOUND)
    message(STATUS "Success!!!")
endif()
find_package(Threads REQUIRED)
include_directories("include")
set(SOURCES main.cpp include/ProtobufHelpers.cpp)

SET(COMPILE_FLAGS "-I/usr/local/include -I/usr/local/lib -pthread ")
SET(LINK_FLAGS "-L/usr/local/lib -lprotobuf -pthread -lpthread")
SET( CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${COMPILE_FLAGS}" )
SET( CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${LINK_FLAGS}" )

add_executable(${PROJECT_NAME} ${SOURCES} ${TRX_MESSAGE})
target_link_libraries(${PROJECT_NAME} PRIVATE ${Protobuf} ${Boost_LIBRARIES} ${Threads})

