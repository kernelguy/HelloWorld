/*
 * ITranslations.h
 *
 *  Created on: 16. jul. 2017
 *      Author: steffen
 */

#ifndef SRC_CONTRACTS_ITRANSLATIONS_H_
#define SRC_CONTRACTS_ITRANSLATIONS_H_

namespace Contracts
{

class ITranslations
{
public:
	virtual ~ITranslations() = default;

	virtual const char* GetText(const char *) = 0;
};

} /* namespace Contracts */

#endif /* SRC_CONTRACTS_ITRANSLATIONS_H_ */
