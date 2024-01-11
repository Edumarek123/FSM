#ifndef FINITEFiniteStateMachine_HPP
#define FINITEFiniteStateMachine_HPP

#include <iostream>

// Forward declarations
class State;
class IdleState;
class RunState;

// Context class
class FiniteStateMachine
{
public:
    FiniteStateMachine();

    // Set the current state
    void setState(State *newState);

    // Trigger events
    void start();
    void stop();

private:
    State *currentState;
};

#endif