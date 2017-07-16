/*
 * IOC.h
 *
 *  Created on: 15. jul. 2017
 *      Author: steffen
 */

#ifndef SRC_IOC_IOC_H_
#define SRC_IOC_IOC_H_

#include <contracts/IIOC.h>
#include <helpers/Singleton.h>
#include <memory>
#include <Hypodermic/Hypodermic.h>

class IOC: public Contracts::IIOC, public Singleton<IOC>
{
public:
	IOC();
	virtual ~IOC();

	std::shared_ptr< Hypodermic::Container > operator->() { return mpContainer; }

private:
	std::shared_ptr< Hypodermic::Container > mpContainer;
};

#endif /* SRC_IOC_IOC_H_ */
