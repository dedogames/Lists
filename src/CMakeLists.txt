file(GLOB_RECURSE lists_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
file(GLOB_RECURSE lists_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/*.hpp")

set (lists_INCLUDE_DIRS "")
foreach (_headerFile ${lists_HEADERS})
    get_filename_component(_dir ${_headerFile} PATH)
    list (APPEND lists_INCLUDE_DIRS ${_dir})
endforeach()
list(REMOVE_DUPLICATES lists_INCLUDE_DIRS)

add_executable(lists ${lists_SOURCES} ${lists_HEADERS})
target_include_directories(lists PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/")
set_target_properties(lists PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${INSTALLATION_PATH}/)
install(TARGETS lists DESTINATION bin)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}) 

set(lists_TARGET_LIBRARIES 
    ${CMAKE_THREAD_LIBS_INIT} #pthread    
) 
 
#link libs with executable lists
target_link_libraries(lists ${lists_TARGET_LIBRARIES} )
 