#!/bin/bash

clear

g++ -o model main.cpp StateMachine/StateMachine.cpp State/State.cpp IdleState/IdleState.cpp RunState/RunState.cpp -m64 -g -Wall 

# ./model
valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all -v ./model
