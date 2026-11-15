<div align="center">

# Finite State Machine Library

**A small, reusable C++ implementation of the finite state machine pattern.**

![Language](https://img.shields.io/badge/language-C%2B%2B-00599C?logo=cplusplus&logoColor=white)
![Pattern](https://img.shields.io/badge/design%20pattern-FSM-6f42c1)
![Status](https://img.shields.io/badge/status-learning%20library-lightgrey)

</div>

## Overview

This project demonstrates a straightforward way to model behavior as a collection of states managed by a state machine.

Finite State Machines (FSMs) are useful when an object can occupy one state at a time and change behavior in response to events or conditions. Typical applications include character controllers, menu navigation, protocol handling, and workflow orchestration.

## Included example states

- **IdleState** — example idle behavior
- **RunState** — example running behavior
- **State** — state abstraction
- **StateMachine** — state coordination and transition management

The repository also includes a small `main.cpp` entry point demonstrating the implementation.

## Technology

- C++

## Build

A compilation helper is included:

```bash
chmod +x comp.sh
./comp.sh
```

Inspect the script if your compiler or build environment differs from the original setup.

## Repository layout

```text
.
├── State/
├── StateMachine/
├── IdleState/
├── RunState/
├── main.cpp
├── comp.sh
└── README.md
```

## Design intent

The library is deliberately small and intended as a learning/reference implementation. It provides a starting point for separating state-specific behavior from the object that owns the state machine.

## Project status

Educational C++ library. API stability, unit-test coverage, and production readiness have not been established.

## Contributing

Issues and pull requests describing focused improvements are welcome.

## License

No license file was identified in the repository at the time of writing. Contact the author before redistributing or reusing the project.
