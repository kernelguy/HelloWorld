/*
 * Application.h
 *
 *  Created on: 20. aug. 2017
 *      Author: steffen
 */

#ifndef SRC_APPLICATION_H_
#define SRC_APPLICATION_H_

#include <contracts/IApplication.h>
#include "traits/LoggerTrait.h"

class Application : public Contracts::IApplication, protected Traits::LoggerTrait
{
public:
	Application();
	virtual ~Application() override;

	virtual Contracts::IIOC& Ioc() override;

	int Run() override;

protected:
	friend Contracts::IApplication;
	static Application *mpInstance;

};

#endif /* SRC_APPLICATION_H_ */
