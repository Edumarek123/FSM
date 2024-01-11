#ifndef STATE_HPP
#define STATE_HPP

#include "../FiniteStateMachine/FiniteStateMachine.hpp"

// State base class
class State
{
public:
    virtual void handleStart(FiniteStateMachine &context) = 0;
    virtual void handleStop(FiniteStateMachine &context) = 0;
};

#endif