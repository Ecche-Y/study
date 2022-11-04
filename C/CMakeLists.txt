cmake_minimum_required(VERSION 3.21)
project(C C)

set(CMAKE_C_STANDARD 23)

add_executable(for LoopControl/for/for.c)
add_executable(sum2 LoopControl/Examples/sum2.c)
add_executable(coin LoopControl/Examples/coin.c)
add_executable(intDecomposition LoopControl/Examples/intDecomposition.c)
add_executable(bool bool/bool.c)
add_executable(main switch-case/main.c)
add_executable(test arrays/test.c)
add_executable(Hash arrays/Examples/Hash.c)
add_executable(sum LoopControl/Examples/sum.c)

add_executable(doWhile LoopControl/doWhile/doWhile.c)