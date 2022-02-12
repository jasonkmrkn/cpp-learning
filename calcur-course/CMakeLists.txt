cmake_minimum_required(VERSION 3.21)
project(Curry_C__)

set(CMAKE_CXX_STANDARD 14)

add_executable(Curry_C__
        exercise/iostream/istream.cpp
        exercise/iostream/ostream.cpp
        exercise/collections/collections.cpp
        exercise/collections/collections2.cpp
        exercise/constModifier/constModifier.cpp
        exercise/swapVar.cpp
        exercise/functionOverloading/functionOverloading.cpp
        exercise/functionOverloading/mathOverloading.cpp
        exercise/rangeBasedForloop.cpp
        exercise/STL.cpp
        exercise/tes.cpp
        exercise/vector.cpp
        exercise/functionOverloading/defaultParameterValue/defArg.cpp
        "project/1_GuessGame/with best score/guessGame_vector_bestscore.cpp"
        project/1_GuessGame/guessGame_array.cpp
        project/1_GuessGame/guessGame_STLArray.cpp
        project/1_GuessGame/guessGame_vector.cpp
        project/2_enhanceGuessGame/guessGame_vector_bestscore.cpp)
