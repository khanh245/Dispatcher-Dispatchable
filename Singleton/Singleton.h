/*
 * Singleton.h
 *
 *  Created on: Jun 20, 2014
 *      Author: khanhn
 *  Purpose: Generic Singleton to turn other classes into singleton object
 *
 */

#ifndef SINGLETON_H_
#define SINGLETON_H_

#include <iostream>

template<class T>
class Singleton {
public:
	static T* GetInstance();
	static void DestroyInstance();

protected:
	Singleton();
	~Singleton();

private:
	Singleton(const Singleton& RHS);
	Singleton &operator=(const Singleton& RHS);

	static T* mInstance;
};

#include "Singleton.inc"
#endif /* SINGLETON_H_ */
