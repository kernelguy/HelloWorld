/*
 * ioc.cpp
 *
 *  Created on: 24. jul. 2017
 *      Author: steffen
 */


#include <doctest.h>
#include <contracts/IIOC.h>
#include "contracts/ITranslations.h"
#include "Application.h"

TEST_CASE("Testing the IOC class") {
	Application app;
	Contracts::IIOC& ioc = app.Ioc();

	SUBCASE("Testing that IOC is singleton") {
		Contracts::IIOC& ioc2 = app.Ioc();

		CHECK(&ioc == &ioc2);
	}
	SUBCASE("IOC translations") {
		auto t = ioc->resolve< Contracts::ITranslations  >();
		CHECK(t->GetText("IOC translations") == "IOC translations");
	}
}

