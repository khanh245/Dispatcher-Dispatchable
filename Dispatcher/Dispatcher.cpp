/*
 * Dispatcher.cpp
 *
 *  Created on: Jun 20, 2014
 *      Author: khanhn
 *  Purpose: A Simple Dispatcher implementation
 */

#include "Dispatcher.h"

#include "IDispatchable.h"

Dispatcher::Dispatcher()
{
}

Dispatcher::~Dispatcher()
{
}

void Dispatcher::enqueue(IEvent* _event)
{
	priorityQueue.push(_event);
}

IEvent* Dispatcher::dequeue()
{
	IEvent* result;
	if (count() > 0)
	{
		result = priorityQueue.top();
		priorityQueue.pop();
	}

	return result;
}

void Dispatcher::dispatch()
{
	if (this->count() > 0)
	{
		IEvent* event = dequeue();
		IDispatchable* handler = (IDispatchable*)event->getObserver(1);
		handler->handleEvent(event);
	}
}
