// IdleState.cpp
#include "IdleState.hpp"

IdleState::IdleState(StateMachine *stateMachine)
{
    setStateMachine(stateMachine);
    _name = "Idle State";
}

void IdleState::enterState()
{
    std::cout << "Joined " << _name << std::endl;
}

void IdleState::exitState()
{
    std::cout << "Left " << _name << std::endl;
}

void IdleState::update()
{
    if (true)
    {
        _stateMachine->setState(new State());
    }
}