//============================================================================
// Name        : Hello.cpp
// Author      : Steffen Brummer
// Version     :
// Copyright   : Copyright 2017. All rights reserved.
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "ioc/IOC.h"
#include "contracts/ITranslations.h"
#include "AppConfig.h"

using namespace std;

int main() {
	IOC ioc = IOC::Instance();

	auto translations = ioc->resolve< Contracts::ITranslations  >();

	cout << translations->GetText("Hello\nWorld!") << endl; // prints Hello\nWorld!
	return 0;
}
