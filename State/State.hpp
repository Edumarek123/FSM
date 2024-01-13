#ifndef STATE_HPP
#define STATE_HPP

#include "../StateMachine/StateMachine.hpp"

class State
{
public:
    const char *_name = "baseState";
    StateMachine *_stateMachine;

    State() {}
    State(StateMachine *stateMachine);
    virtual ~State() {}

    void setStateMachine(StateMachine *stateMachine);
    virtual void enterState();
    virtual void exitState();
    virtual void update();
};

#endif