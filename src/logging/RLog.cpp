/*
 * RLog.cpp
 *
 *  Created on: 16. jul. 2017
 *      Author: steffen
 */

#include "RLog.h"
#include <NanoLog.hpp>

RLog::RLog()
{
	// TODO Auto-generated constructor stub
	nanolog::GuaranteedLogger gl;
	nanolog::initialize(gl, ".", "HelloWorld.log", 1);
}

RLog::~RLog()
{
	// TODO Auto-generated destructor stub
}

