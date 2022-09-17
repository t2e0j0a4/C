cmake_minimum_required(VERSION 3.23)
project(HelloWorld C)

set(CMAKE_C_STANDARD 11)

include_directories(1)

add_executable(HelloWorld
        1/Start.c
        Array_of_Structures.c
        DMA_calloc.c
        DMA_free.c
        DMA_malloc.c
        DMA_realloc.c
        File_I_O_1.c
        File_I_O_2.c
        File_I_O_3.c
        Function&Recursion.c
        Function_Call.c
        Hello.c
        HelloWorld.c
        Pointer_to_Structures.c
        Pointers.c
        Recursion.c
        Start.c
        Structures.c
        typedof_operator_structures.c)
