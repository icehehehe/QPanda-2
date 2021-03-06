/*
Copyright (c) 2017-2018 Origin Quantum Computing. All Right Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef QUBIT_FACTORY_H
#define QUBIT_FACTORY_H

#include "QuantumMachineInterface.h"
#include "QPanda/QPandaException.h"
#include <functional>
#include <stack>
using namespace std;

#define REGISTER_QUBIT(classname) \
Qubit* classname##_Constructor(PhysicalQubit* physQ)\
{\
    return new classname(physQ);\
}\
 QubitFactoryHelper _Qubit_Factory_Helper_##classname(\
    #classname, \
	classname##_Constructor\
)


/* 5. Qubit Factory */
class QubitFactory
{
	QubitFactory();
public:
	static QubitFactory & GetFactoryInstance();
	Qubit* GetInstance(PhysicalQubit*);
	typedef function<Qubit*(PhysicalQubit*)> constructor_t;
	typedef map<string, constructor_t> constructor_Map_t;
	void registerclass(string &, constructor_t constructor);
	// the constructor stack
	constructor_Map_t _Qubit_Constructor;
};

class QubitFactoryHelper
{
	typedef QubitFactory::constructor_t constructor_t;
public:
	QubitFactoryHelper(string, constructor_t);
};

#endif