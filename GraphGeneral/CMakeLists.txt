target_sources(cyberfilm
    PRIVATE
    "${CMAKE_CURRENT_LIST_DIR}/sources/GraphOperations.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/sources/GraphTraversalMain.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/sources/Node.cpp"
    PUBLIC
    "${CMAKE_CURRENT_LIST_DIR}/headers/Node.h"
    "${CMAKE_CURRENT_LIST_DIR}/headers/GraphOperations.h"
    "${CMAKE_CURRENT_LIST_DIR}/headers/GraphTraversalMain.h"
    )

target_include_directories(cyberfilm PUBLIC "${CMAKE_CURRENT_LIST_DIR}/headers")
