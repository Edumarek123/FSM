#!/bin/bash

clear

g++ -o model main.cpp FiniteStateMachine/FiniteStateMachine.cpp -m64 -g -Wall 

./model
# valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all -v ./model
