CMAKE_MINIMUM_REQUIRED( VERSION 2.6 )

SET( ProjectName "SPI_12_Project" )
PROJECT( ${ProjectName} )

SET( lib_src student.cpp )
SET( demo_src demo.cpp )
SET( test1_src test1.cpp )
SET( test2_src test2.cpp )
SET( doxyfile ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile)

ADD_LIBRARY( ${ProjectName}_LIB STATIC ${lib_src} )


ADD_EXECUTABLE( ${ProjectName}_demo ${demo_src} )
TARGET_LINK_LIBRARIES( ${ProjectName}_demo ${ProjectName}_LIB )

ADD_EXECUTABLE( ${ProjectName}_test1 ${test1_src} )
TARGET_LINK_LIBRARIES( ${ProjectName}_test1 ${ProjectName}_LIB )

ADD_EXECUTABLE( ${ProjectName}_test2 ${test2_src} )
TARGET_LINK_LIBRARIES( ${ProjectName}_test2 ${ProjectName}_LIB )

ENABLE_TESTING()
ADD_TEST( First_test ${ProjectName}_test1 )
ADD_TEST( Second_test ${ProjectName}_test2 )


# add a target to generate API documentation with Doxygen
find_package(Doxygen)
option(BUILD_DOCUMENTATION "Create and install the HTML based API documentation (requires Doxygen)" ${DOXYGEN_FOUND})

if(BUILD_DOCUMENTATION)
    if(NOT DOXYGEN_FOUND)
        message(FATAL_ERROR "Doxygen is needed to build the documentation.")
    endif()

    
    #set(doxyfile ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)

    add_custom_target(doc
        COMMAND ${DOXYGEN_EXECUTABLE} ${doxyfile}
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        COMMENT "Generating API documentation with Doxygen"
        VERBATIM)

    install(DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/html DESTINATION share/doc)
endif()
