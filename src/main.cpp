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
	Accident ac ((IEvent::Priority)2, &cop);
	Accident acc((IEvent::Priority)0, &cop);
	Accident acc2 ((IEvent::Priority)1, &cop);
	Accident norm ((IEvent::Priority)2, &cop);
	Accident acc3 ((IEvent::Priority)3, &cop);


	Singleton<Dispatcher>::GetInstance()->enqueue(&acc3);
	Singleton<Dispatcher>::GetInstance()->enqueue(&ac);
	Singleton<Dispatcher>::GetInstance()->enqueue(&acc);
	Singleton<Dispatcher>::GetInstance()->enqueue(&acc2);
	Singleton<Dispatcher>::GetInstance()->enqueue(&norm);

	IEvent* event = Singleton<Dispatcher>::GetInstance()->dequeue();
	event = Singleton<Dispatcher>::GetInstance()->dequeue();
	event = Singleton<Dispatcher>::GetInstance()->dequeue();
	event = Singleton<Dispatcher>::GetInstance()->dequeue();
	event = Singleton<Dispatcher>::GetInstance()->dequeue();

	int count = Singleton<Dispatcher>::GetInstance()->count();
	Singleton<Dispatcher>::DestroyInstance();

	return 0;
}
