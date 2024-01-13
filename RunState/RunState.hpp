// IdleState.hpp
#ifndef RUN_STATE_HPP
#define RUN_STATE_HPP

#include "../StateMachine/StateMachine.hpp"
#include "../State/State.hpp"
#include <iostream>

class RunState : public State
{
public:
    RunState(StateMachine *stateMachine);
    ~RunState() {}

    void enterState() override;
    void exitState() override;
    void update() override;
};

#endif