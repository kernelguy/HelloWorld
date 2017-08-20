/*
 * IOC.cpp
 *
 *  Created on: 15. jul. 2017
 *      Author: steffen
 */

#include "IOC.h"
#include <Hypodermic/Hypodermic.h>
#include <contracts/ILogging.h>
#include <contracts/IMessageDispatcher.h>
#include <contracts/ITranslations.h>

#include <dispatcher/MessageDispatcher.h>
#include <translations/Translations.h>
#include <logging/Logger.h>


IOC::IOC()
{
    Hypodermic::ContainerBuilder builder;

    builder.registerType< MessageDispatcher >().as< Contracts::IMessageDispatcher >();

    builder.registerType< Logger >().as< Contracts::ILogging >();

    builder.registerType< Translations >().as< Contracts::ITranslations >();

    // Actually build the `Container` we have just configured.
    mpContainer = builder.build();

}

IOC::~IOC()
{
	// TODO Auto-generated destructor stub
}

