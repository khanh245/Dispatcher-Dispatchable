/*
 * IDispatchable.h
 *
 *  Created on: Jun 20, 2014
 *      Author: khanhn
 *  Purpose: Object that is able to dispatch event
 */

#ifndef IDISPATCHABLE_H_
#define IDISPATCHABLE_H_

#include "IEvent.h"
#include "IObserver.h"

class IDispatchable	:	public IObserver
{
public:
	virtual ~IDispatchable() { }
	virtual void handleEvent (IEvent* _event) = 0;
};

#endif /* IDISPATCHABLE_H_ */
