#ifndef STATEMACHINE_HPP
#define STATEMACHINE_HPP

class State;

class StateMachine
{
public:
    State *_currentState;

    StateMachine();
    ~StateMachine();

    void setState(State *newState);
    void update();
};
#endif