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

void test()
{
	std::cout << "Dispatcher and dispatchable events demo" << std::endl;

	Accident ac (IEvent::NORMAL);
	Accident acc(IEvent::VERYHIGH);
	Accident acc2 (IEvent::HIGH);
	Accident norm (IEvent::NORMAL);
	Accident acc3 (IEvent::LOW);

	int count = Singleton<Dispatcher>::GetInstance()->count();
	std::cout << "Total of events: " << count << std::endl;

	Singleton<Dispatcher>::GetInstance()->dispatch();
	Singleton<Dispatcher>::DestroyInstance();
}

void test2()
{
	Accident* acc = new Accident(IEvent::VERYHIGH);
	delete acc;
}

int main()
{
	test();
	//test2();

	return 0;
}
