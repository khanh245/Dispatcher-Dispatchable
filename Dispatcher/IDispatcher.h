/*
 * IDispatcher.h
 *
 *  Created on: Jun 19, 2014
 *      Author: khanhn
 *
 *  Purpose: Provide an interface for a dispatchable object
 */

#ifndef IDISPATCHER_H_
#define IDISPATCHER_H_

#include "IEvent.h"

class IDispatcher
{
public:
	IDispatcher();
	virtual ~IDispatcher();

	virtual void Enqueue(IEvent* e) = 0;
	virtual IEvent* Dequeue() = 0;
};

#endif /* IDISPATCHER_H_ */