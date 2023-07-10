# Pico

![pico](./doc/image/pico-painting.jpg)


# What is Pico?

The _Pico Playground_ comprises a tiny framework for embedded systems, which decouples application software from the underlying real time operating system (RTOS) by a very thin abstraction layer. In addition, the _Pico Playground_ comes with five tiny sample applications to demonstrate the API usage of the framework.

The _Pico API_ provides some symbol and type definitions, as well as a set of eight API functions, enabling _Zephyr_ novices to get basic tasks easily running on embedded hardware. The API provides the following basics: initializing a console and waiting for console readiness, formatted/colored printing to a console, reading a system clock in microseconds, sleeping for a given number of microseconds, level controlled logging with microsecond timestamps, on/off or toggle control of up to four LEDs, initializing and callback setup for up to four buttons, and button state polling.

Due to its small codebase the Pico framework can be easily adopted to various RTOS types or hardware abstractions (like FreeRTOS or STM32CubeMX). In this paper, however, we describe _Pico_ in a pure _Zephyr RTOS_ context. Due to its tiny size _Pico_ is an excellent context for tutorials, as it allows _Zephyr_ novices to get running on embedded boards with _Zephyr_ without exposing the novice to advanced concepts like kernel configuration and device tree magic during the initial learning phase. Once the reader is familiar with building and running of _Pico_ based _Zephyr_ samples, the reader can tackle the advanced _Zephyr_ concepts in subsequent phases.
