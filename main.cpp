#include <iostream>
#include "StateMachine/StateMachine.hpp"
#include "State/State.hpp"
#include "IdleState/IdleState.hpp"
#include "RunState/RunState.hpp"

int main(int argc, char *argv[])
{
	StateMachine FSM;
	FSM.setState(new RunState(&FSM));

	FSM.setState(new IdleState(&FSM));
	FSM.setState(new IdleState(&FSM));
	FSM.setState(new IdleState(&FSM));
	FSM.setState(new RunState(&FSM));

	return 0;
}
