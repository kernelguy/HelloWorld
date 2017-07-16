/*
 * MessageDispatcher.h
 *
 *  Created on: 16. jul. 2017
 *      Author: steffen
 */

#ifndef SRC_DISPATCHER_MESSAGEDISPATCHER_H_
#define SRC_DISPATCHER_MESSAGEDISPATCHER_H_

#include <contracts/IMessageDispatcher.h>

class MessageDispatcher: public Contracts::IMessageDispatcher
{
public:
	MessageDispatcher();
	virtual ~MessageDispatcher();
};

#endif /* SRC_DISPATCHER_MESSAGEDISPATCHER_H_ */
