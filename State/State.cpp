#include "State.hpp"
#include <iostream>

State::State(StateMachine *stateMachine)
{
    setStateMachine(stateMachine);
}

void State::setStateMachine(StateMachine *stateMachine)
{
    _stateMachine = stateMachine;
}

void State::enterState()
{
    std::cout << "Joined " << _name << std::endl;
}

void State::exitState()
{
    std::cout << "Left " << _name << std::endl;
}

void State::update()
{
}