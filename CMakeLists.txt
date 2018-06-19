CMAKE_MINIMUM_REQUIRED( VERSION 2.6 )

SET( ProjectName "SPI_12_Project" )
PROJECT( ${ProjectName} )

SET( lib_src student.cpp )
SET( demo_src demo.cpp )
SET( test1_src test1.cpp )
SET( test2_src test2.cpp )

ADD_LIBRARY( ${ProjectName}_LIB STATIC ${lib_src} )


ADD_EXECUTABLE( ${ProjectName}_demo ${demo_src} )
TARGET_LINK_LIBRARIES( ${ProjectName}_demo ${ProjectName}_LIB )

ADD_EXECUTABLE( ${ProjectName}_test1 ${test1_src} )
TARGET_LINK_LIBRARIES( ${ProjectName}_test1 ${ProjectName}_LIB )

ADD_EXECUTABLE( ${ProjectName}_test2 ${test2_src} )
TARGET_LINK_LIBRARIES( ${ProjectName}_test2 ${ProjectName}_LIB )
