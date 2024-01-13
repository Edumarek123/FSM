#include "StateMachine.hpp"
#include "../State/State.hpp"

StateMachine::StateMachine()
{
    _currentState = nullptr;
}

StateMachine::~StateMachine()
{
    if (_currentState != nullptr)
        delete _currentState;
}

void StateMachine::setState(State *newState)
{
    if (_currentState != nullptr)
    {
        _currentState->exitState();
        delete _currentState;
    }

    _currentState = newState;
    _currentState->enterState();
}

void StateMachine::update()
{
    _currentState->update();
}