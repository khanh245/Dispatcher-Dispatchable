/*
 * Dispatcher.h
 *
 *  Created on: Jun 20, 2014
 *      Author: khanhn
 *  Purpose: A dispatcher object that handles all events from Dispatchable object
 */

#ifndef DISPATCHER_H_
#define DISPATCHER_H_

#include "IDispatcher.h"

class Dispatcher : public IDispatcher
{
public:
	Dispatcher();
	virtual ~Dispatcher();

	void Enqueue(IEvent* event);
	IEvent* Dequeue();
};

#endif /* DISPATCHER_H_ */
