/*
 * Dispatcher.cpp
 *
 *  Created on: Jun 20, 2014
 *      Author: khanhn
 *  Purpose: A Simple Dispatcher implementation
 */

#include <stdexcept>

#include "Dispatcher.h"

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
	IEvent* result = NULL;
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
		while(event)
		{
			IDispatchable* handler = event->getHandler(1);
			handler->handleEvent(event);
			event = dequeue();
		}
	}
}
