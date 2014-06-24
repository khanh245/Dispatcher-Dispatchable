/*
 * main.cpp
 *
 *  Created on: Jun 19, 2014
 *      Author: khanhn
 *
 *  Purpose: This is a POC for dispatcher/dispatchable.
 */

#include <iostream>
#include "Singleton.h"
#include "Dispatcher.h"
#include "Traffic.h"
#include "Accident.h"

int main()
{
	std::cout << "Dispatcher and dispatchable events demo" << std::endl;

	Traffic cop;
	Accident acc((IEvent::Priority)0, &cop);

	Singleton<Dispatcher>::GetInstance()->Enqueue(&acc);

	Singleton<Dispatcher>::DestroyInstance();
	return 0;
}
