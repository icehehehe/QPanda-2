[![Build Status](https://travis-ci.org/OriginQ/QPanda-SDK.svg?branch=master)](https://travis-ci.org/OriginQ/QPanda-SDK)

QPanda是一套用于处理量子电路，并适应近期开发出的各式量子计算机上开发应用和进行实验的一套软件。在QPanda里，总共由三个过程组成：初始化生成、编译和运行。初始化生成是允许用户设计不同的量子线路来处理对应需要解决的问题。而编译则是允许用户重写它们以在不同的后端运行（比如模拟器，量子芯片，不同公司的量子芯片等）。最后是运行，即是收集结果的过程，对于运行后的数据采集，取决于程序本身的设计需求去做相应的存储或者转化，运行的结果，也依赖于解决问题的需要而定。有的问题，可能需要依赖上一个量子程序运行结果才能执行下一个量子程序，诸如此类。


Qpanda is a software used to deal with quantum circuits and experiments on various quantum computers developed recently.

In QPanda, there are three processes: initialization, compilation, and running.

The initialization allows users to design different quantum circuits to deal with the corresponding problems.

Compilation allows users to rewrite them to run on different backends (such as simulators, quantum chips, quantum chips of different companies, etc.).

Running, that is, the process of collecting results, depending on the design of the program to do the corresponding storage or transformation of the results.Some problems may depend on the results of a previous quantum program before they can be executed, and so on.

QPanda的整体设计思路细节，总共涵盖了如下：

1. **全系列兼容**：

2. **标准架构**：

3. **标准化量子机器模型**：

QPanda项目总共包括：
- QPanda SDK：

用于编写量子程序和应用程序的 C++宿主语言工具包。它使用户能够方便连接和执行量子程序。


- QRunes：


QRunes是本源量子制定的一套量子计算指令集。

- QRunes Generator：


QRunes Generator 是一个支持以函数调用方式生成QRunes指令的C++库。

- QPanda使用文档：

提供了一些常见算法的实施具体步骤，包括算法概要，算法对应的量子线路图，算法对应的QPanda代码等，旨在指导用户快速正确的使用QPanda。
