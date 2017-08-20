/*
 * Application.h
 *
 *  Created on: 20. aug. 2017
 *      Author: steffen
 */

#ifndef SRC_CONTRACTS_IAPPLICATION_H_
#define SRC_CONTRACTS_IAPPLICATION_H_

#include "IIOC.h"

namespace Contracts {

class IApplication
{
public:
	static IApplication& instance();

	virtual ~IApplication() = default;

	virtual IIOC& Ioc() = 0;

	virtual int Run() = 0;
};

} /* namespace Contracts */

#endif /* SRC_CONTRACTS_IAPPLICATION_H_ */
