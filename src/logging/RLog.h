/*
 * RLog.h
 *
 *  Created on: 16. jul. 2017
 *      Author: steffen
 */

#ifndef SRC_LOGGING_RLOG_H_
#define SRC_LOGGING_RLOG_H_

#include <contracts/ILogging.h>

class RLog : public Contracts::ILogging
{
public:
	virtual ~RLog();
	RLog();
};

#endif /* SRC_LOGGING_RLOG_H_ */
