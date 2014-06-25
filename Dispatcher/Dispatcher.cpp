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

void Dispatcher::Enqueue(IEvent* _event)
{
	priorityQueue.push(_event);
}

IEvent* Dispatcher::Dequeue()
{
	return 0;
}
