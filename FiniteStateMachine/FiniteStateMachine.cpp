#include "FiniteStateMachine.hpp"

#include "../State/State.hpp"
#include "../DerivedStates/IdleState.hpp"
#include "../DerivedStates/RunState.hpp"

// Implementation of FiniteStateMachine methods
FiniteStateMachine::FiniteStateMachine() : currentState(nullptr)
{
    // Start with the Idle state
    setState(new IdleState());
}

void FiniteStateMachine::setState(State *newState)
{
    currentState = newState;
}

void FiniteStateMachine::start()
{
    currentState->handleStart(*this);
}

void FiniteStateMachine::stop()
{
    currentState->handleStop(*this);
}
