/*
 * RLog.cpp
 *
 *  Created on: 16. jul. 2017
 *      Author: steffen
 */

#include "Logger.h"

#include <NanoLog.hpp>

Logger::Logger()
{
	// TODO Auto-generated constructor stub
	nanolog::GuaranteedLogger gl;
	nanolog::initialize(gl, ".", "HelloWorld.log", 1);
}

Logger::~Logger()
{
	// TODO Auto-generated destructor stub
}

Contracts::ILogging& Logger::SetLogDir(std::string aDir)
{
	return *this;
}

Contracts::ILogging& Logger::SetLogFileName(std::string aFileName)
{
	return *this;
}

Contracts::ILogging& Logger::SetMaxLogFileSize(uint32_t aMaxFileSize)
{
	return *this;
}

Contracts::ILogging& Logger::SetLogLevel(LogLevel aLevel)
{
	nanolog::set_log_level((nanolog::LogLevel)aLevel);
	return *this;
}

bool Logger::IsLogged(LogLevel aLevel)
{
	return nanolog::is_logged((nanolog::LogLevel)aLevel);
}

bool Logger::Log(const char* aMsg, Contracts::ILogging::LogLevel aLevel, const char* aFile, const char* aFunction, int aLine)
{
	nanolog::NanoLog() == nanolog::NanoLogLine((nanolog::LogLevel)aLevel, aFile, aFunction, aLine) << aMsg;
	return true;
}
