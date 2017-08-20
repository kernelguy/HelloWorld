/*
 * LoggerTrait.cpp
 *
 *  Created on: 20. aug. 2017
 *      Author: steffen
 */

#include "LoggerTrait.h"
#include "Application.h"
#include "contracts/ILogging.h"
#include <memory>

namespace Traits
{

Contracts::ILogging& LoggerTrait::Logger()
{
	static std::shared_ptr< Contracts::ILogging > logger = NULL;
	if (logger == NULL) {
		logger = Application::instance().Ioc()->resolve< Contracts::ILogging >();
	}
	return *(logger);
}

} /* namespace Traits */
