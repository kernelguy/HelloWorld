/*
 * Singleton.h
 *
 *  Created on: 16. jul. 2017
 *      Author: steffen
 */

#ifndef SRC_HELPERS_SINGLETON_H_
#define SRC_HELPERS_SINGLETON_H_

template <typename T>
class Singleton
{
public:
	static T& Instance()
	{
		static T instance;
		return instance;
	}
};

#endif /* SRC_HELPERS_SINGLETON_H_ */
