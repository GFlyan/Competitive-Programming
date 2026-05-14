cmake_minimum_required(VERSION 3.20)
project(CPP)

set(CMAKE_CXX_STANDARD 20)

# Busca automaticamente apenas os arquivos que realmente existem nas pastas
file(GLOB_RECURSE SOURCES "*.cpp" "*.h")

if(NOT SOURCES)
    message(FATAL_ERROR "Nenhum arquivo .cpp encontrado nas pastas!")
endif()

add_executable(CPP ${SOURCES}
        "MPC/CONTEST 6/A - Reorder.cpp"
        "MPC/CONTEST 6/B - Stickers and Toys.cpp"
        "MPC/CONTEST 6/C - Vasily the Bear and Triangle.cpp"
        "MPC/CONTEST 6/E - Divisor Subtraction.cpp")
