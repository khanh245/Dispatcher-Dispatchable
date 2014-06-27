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

	Accident ac (IEvent::NORMAL);
	Accident acc(IEvent::VERYHIGH);
	Accident acc2 (IEvent::HIGH);
	Accident norm (IEvent::NORMAL);
	Accident acc3 (IEvent::LOW);

	int count = Singleton<Dispatcher>::GetInstance()->count();
	std::cout << "Total of events: " << count << std::endl;

	Singleton<Dispatcher>::GetInstance()->dispatch();
	Singleton<Dispatcher>::DestroyInstance();

	return 0;
}
