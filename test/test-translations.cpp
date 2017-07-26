/*
 * translations.cpp
 *
 *  Created on: 24. jul. 2017
 *      Author: steffen
 */

#include <doctest.h>
#include <translations/Translations.h>

TEST_CASE("Testing the Translations class") {
	Translations t;

	CHECK(t.GetText("Hello") == "Hello");
	CHECK(t.GetText("World") == "World");
}
