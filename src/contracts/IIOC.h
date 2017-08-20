/*
 * IIOC.h
 *
 *  Created on: 15. jul. 2017
 *      Author: steffen
 */

// Giving up on this. To my knowledge it is not possible to declare and interface for a template class.
// In C++ template and virtual declarations are mutually exclusive.
//
// So an IOC using templates, can not be inherited from an abstract base class.
// If really needed, an instance should be made of the original template class, like Hypodermic::Container.
//
#ifndef SRC_CONTRACTS_IIOC_H_
#define SRC_CONTRACTS_IIOC_H_


#include <memory>
#include <Hypodermic/Hypodermic.h>

namespace Contracts
{

class IIOC
{
public:
	IIOC() {}
	virtual ~IIOC() = default;

	IIOC(const IIOC &) = delete;
    void operator=(const IIOC &x) = delete;

  	std::shared_ptr< Hypodermic::Container > operator->() { return mpContainer; }

protected:
	std::shared_ptr< Hypodermic::Container > mpContainer;

};

} /* namespace Contracts */

#endif /* SRC_CONTRACTS_IIOC_H_ */

