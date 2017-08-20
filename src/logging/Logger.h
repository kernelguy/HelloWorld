/*
 * RLog.h
 *
 *  Created on: 16. jul. 2017
 *      Author: steffen
 */

#ifndef SRC_LOGGING_LOGGER_H_
#define SRC_LOGGING_LOGGER_H_

#include <contracts/ILogging.h>

class Logger : public Contracts::ILogging
{
public:
	Logger();
	virtual ~Logger() override;

	Contracts::ILogging& SetLogDir(std::string aDir) override;
	Contracts::ILogging& SetLogFileName(std::string aFileName) override;
	Contracts::ILogging& SetMaxLogFileSize(uint32_t aMaxFileSize) override;

	Contracts::ILogging& SetLogLevel(Contracts::ILogging::LogLevel aLevel) override;
    bool IsLogged(Contracts::ILogging::LogLevel aLevel) override;

    bool Log(const char* aMsg, Contracts::ILogging::LogLevel aLevel, const char* aFile, const char* aFunction, int aLine) override;
};

#endif /* SRC_LOGGING_LOGGER_H_ */
