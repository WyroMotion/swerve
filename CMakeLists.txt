cmake_minimum_required(VERSION 3.21..3.23)
project(
  Swerve
  VERSION 0.1.0
  LANGUAGES CXX
)

# Only do these if this is the main project, and not if it is included through add_subdirectory
if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
  # Ensure -std=c++xx instead of -std=g++xx
  set(CMAKE_CXX_EXTENSIONS OFF)

  set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

  # Nicely support folders in IDEs
  set_property(GLOBAL PROPERTY USE_FOLDERS ON)

  # Testing
  include(CTest)
  add_subdirectory(tests)

  # Linting
  set(CMAKE_CXX_CLANG_TIDY clang-tidy)
  set(CMAKE_CXX_CPPCHECK cppcheck)

  # Compiler Caching
  find_program(CCACHE_PROGRAM ccache)
  if(CCACHE_PROGRAM)
      set(CMAKE_CXX_COMPILER_LAUNCHER "${CCACHE_PROGRAM}")
  endif()
endif()

# Add library code
add_subdirectory(src)

# Add application code
add_subdirectory(app)
