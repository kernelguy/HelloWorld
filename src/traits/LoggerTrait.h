/*
 * LoggerTrait.h
 *
 *  Created on: 20. aug. 2017
 *      Author: steffen
 */

#ifndef SRC_TRAITS_LOGGERTRAIT_H_
#define SRC_TRAITS_LOGGERTRAIT_H_

#include "contracts/ILogging.h"

namespace Traits
{

class LoggerTrait
{
protected:
	Contracts::ILogging& Logger();
};

} /* namespace Traits */

#define LOG_DEBUG(aMsg) Logger().IsLogged(Contracts::ILogging::LogLevel::DEBUG) && Logger().Log(aMsg, Contracts::ILogging::LogLevel::DEBUG, __FILE__, __func__, __LINE__)
#define LOG_NOTICE(aMsg) Logger().IsLogged(Contracts::ILogging::LogLevel::NOTICE) && Logger().Log(aMsg, Contracts::ILogging::LogLevel::NOTICE, __FILE__, __func__, __LINE__)
#define LOG_WARNING(aMsg) Logger().IsLogged(Contracts::ILogging::LogLevel::WARNING) && Logger().Log(aMsg, Contracts::ILogging::LogLevel::WARNING, __FILE__, __func__, __LINE__)
#define LOG_ERROR(aMsg) Logger().IsLogged(Contracts::ILogging::LogLevel::ERROR) && Logger().Log(aMsg, Contracts::ILogging::LogLevel::ERROR, __FILE__, __func__, __LINE__)

#endif /* SRC_TRAITS_LOGGERTRAIT_H_ */
