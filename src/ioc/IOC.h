/*
 * IOC.h
 *
 *  Created on: 15. jul. 2017
 *      Author: steffen
 */

#ifndef SRC_IOC_IOC_H_
#define SRC_IOC_IOC_H_

#include <contracts/IIOC.h>

class IOC: public Contracts::IIOC
{
public:
	IOC();
	virtual ~IOC();
};

#endif /* SRC_IOC_IOC_H_ */
