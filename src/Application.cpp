/*
 * Application.cpp
 *
 *  Created on: 20. aug. 2017
 *      Author: steffen
 */

#include <iostream>
#include "Application.h"
#include "contracts/ITranslations.h"
#include "ioc/IOC.h"

Application* Application::mpInstance = 0;

Contracts::IApplication& Contracts::IApplication::instance()
{
	return *Application::mpInstance;
}


Application::Application()
{
	mpInstance = this;
}

Application::~Application()
{
	mpInstance = 0;
}

Contracts::IIOC& Application::Ioc()
{
	static IOC ioc;
	return ioc;
}

int Application::Run()
{
	LOG_DEBUG("Running...");
	auto translations = Ioc()->resolve< Contracts::ITranslations >();

	std::cout << translations->GetText("Hello\nWorld!") << std::endl; // prints Hello\nWorld!
	return 0;
}
