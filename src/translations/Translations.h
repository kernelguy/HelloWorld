/*
 * Translations.h
 *
 *  Created on: 16. jul. 2017
 *      Author: steffen
 */

#ifndef SRC_TRANSLATIONS_TRANSLATIONS_H_
#define SRC_TRANSLATIONS_TRANSLATIONS_H_

#include <contracts/ITranslations.h>

class Translations: public Contracts::ITranslations
{
public:
	Translations();
	virtual ~Translations();

	const char* GetText(const char *apText);
};

#endif /* SRC_TRANSLATIONS_TRANSLATIONS_H_ */
