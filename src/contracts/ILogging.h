/*
 * ILogging.h
 *
 *  Created on: 16. jul. 2017
 *      Author: steffen
 */

#ifndef SRC_CONTRACTS_ILOGGING_H_
#define SRC_CONTRACTS_ILOGGING_H_

#include <cstdint>
#include <string>

namespace Contracts
{

class ILogging
{
public:
    enum class LogLevel : uint8_t { NOTICE, WARNING, ERROR, DEBUG };

	virtual ~ILogging() = default;

	//static ILogging& instance();

	virtual ILogging& SetLogDir(std::string aDir) = 0;
	virtual ILogging& SetLogFileName(std::string aFileName) = 0;
	virtual ILogging& SetMaxLogFileSize(uint32_t aMaxFileSize) = 0;

	virtual ILogging& SetLogLevel(LogLevel aLevel) = 0;
    virtual bool IsLogged(LogLevel aLevel) = 0;

    virtual bool Log(const char* aMsg, LogLevel aLevel, const char* aFile, const char* aFunction, int aLine) = 0;
};

} /* namespace Contracts */

#endif /* SRC_CONTRACTS_ILOGGING_H_ */
