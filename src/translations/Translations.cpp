/*
 * Translations.cpp
 *
 *  Created on: 16. jul. 2017
 *      Author: steffen
 */

#include "Translations.h"
#include <libintl.h>
#include <locale.h>

Translations::Translations()
{
	setlocale (LC_ALL, "");
	bindtextdomain ("hello", "");
	textdomain ("hello");
}

Translations::~Translations()
{
	// TODO Auto-generated destructor stub
}

const char* Translations::GetText(const char *apText)
{
	return gettext(apText);
}
