#ifndef IDLESTATE_HPP
#define IDLESTATE_HPP

#include <iostream>
#include <string>
#include "../State/State.hpp"
class RunState;

class IdleState : public State
{
public:
    void handleStart(FiniteStateMachine &context) override
    {
        std::cout << "Transitioning from Idle to Running\n";
        context.setState(new RunState());
    }
    void handleStop(FiniteStateMachine &context) override
    {
        std::cout << "Invalid event in Idle state\n";
    }
};

#endif