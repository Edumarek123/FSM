// RunState.cpp
#include "RunState.hpp"

RunState::RunState(StateMachine *stateMachine)
{
    setStateMachine(stateMachine);
    _name = "Run State";
}

void RunState::enterState()
{
    std::cout << "Joined " << _name << std::endl;
}

void RunState::exitState()
{
    std::cout << "Left " << _name << std::endl;
}

void RunState::update()
{
    if (true)
    {
        _stateMachine->setState(new State());
    }
}