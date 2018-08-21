target_sources(cyberfilm
    PRIVATE
    "${CMAKE_CURRENT_LIST_DIR}/sources/DjikstraAlgorithm.cpp"
    PUBLIC
    "${CMAKE_CURRENT_LIST_DIR}/headers/DjikstraAlgorithm.h"
    )

target_include_directories(cyberfilm PUBLIC "${CMAKE_CURRENT_LIST_DIR}/headers")
