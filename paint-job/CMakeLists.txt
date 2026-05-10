cmake_minimum_required(VERSION 3.16)

# 1. ONLY CHANGE THIS LINE FOR NEW PROJECTS
project(PAINTJOB LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 2. This automatically uses the name you typed above
add_executable(${PROJECT_NAME} src/main.cpp)

# 3. This also automatically updates
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/include)
