cmake_minimum_required(VERSION 3.22)
project(TristateLogicCircuits)

set(CMAKE_CXX_STANDARD 23)



include_directories(include)

add_subdirectory(source)
add_subdirectory(test)




#
##
#
########
#
##
#

###################
#					#
#    Google Test	#
#					#
###################



include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG v1.14.0 # most recent version 11/2023 Check GITHUB!
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

#
##
#
########
#
##
#




