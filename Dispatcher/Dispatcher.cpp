/*
 * Dispatcher.cpp
 *
 *  Created on: Jun 20, 2014
 *      Author: khanhn
 *  Purpose: A Simple Dispatcher implementation
 */

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
	IEvent* result;
	if (count() > 0)
	{
		result = priorityQueue.top();
		priorityQueue.pop();
	}

	return result;
}
