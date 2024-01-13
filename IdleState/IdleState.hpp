// IdleState.hpp
#ifndef IDLE_STATE_HPP
#define IDLE_STATE_HPP

#include "../StateMachine/StateMachine.hpp"
#include "../State/State.hpp"
#include <iostream>

class IdleState : public State
{
public:
    IdleState(StateMachine *stateMachine);
    ~IdleState() {}

    void enterState() override;
    void exitState() override;
    void update() override;
};

#endif