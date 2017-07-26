/*
 * ioc.cpp
 *
 *  Created on: 24. jul. 2017
 *      Author: steffen
 */


#include <doctest.h>
#include <ioc/IOC.h>
#include "contracts/ITranslations.h"

TEST_CASE("Testing the IOC class") {
	IOC ioc = IOC::Instance();

	SUBCASE("Testing that IOC is singleton") {
		IOC ioc2 = IOC::Instance();

		CHECK(ioc == ioc2);
	}
	SUBCASE("IOC translations") {
		auto t = ioc->resolve< Contracts::ITranslations  >();
		CHECK(t->GetText("IOC translations") == "IOC translations");
	}
}

