cmake_minimum_required(VERSION 3.16)
project(matlab_test)

find_package(Matlab REQUIRED)

matlab_add_mex(
  NAME    MatlabTest
  SRC     src/matlab_test.cpp
)

# Target installation
install(TARGETS MatlabTest
  LIBRARY       DESTINATION "matlab" COMPONENT dev
  RUNTIME       DESTINATION "matlab" COMPONENT dev
)