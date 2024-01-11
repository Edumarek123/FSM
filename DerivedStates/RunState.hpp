#ifndef RUNSTATE_HPP
#define RUNSTATE_HPP

#include <iostream>
#include <string>
#include "../State/State.hpp"

// Running state class
class RunState : public State
{
public:
    void handleStart(FiniteStateMachine &context) override
    {
        std::cout << "Invalid event in Running state\n";
    }
    void handleStop(FiniteStateMachine &context) override
    {
        std::cout << "Transitioning from Running to Stopped\n";
        context.setState(new IdleState());
    }
};

#endif