/*
 * IEvent.h
 *
 *  Created on: Jun 20, 2014
 *      Author: khanhn
 *  Purpose: Interface for all events
 */

#ifndef IEVENT_H_
#define IEVENT_H_

#include "ISubject.h"

class IEvent	:	public ISubject
{
public:
	enum Priority
	{
		VERYHIGH = 0,
		HIGH,
		NORMAL,
		LOW,
		VERYLOW,
		UNSET = -1
	};

	IEvent();
	virtual ~IEvent();

	bool operator< (const IEvent& RHS) const;

protected:
	Priority mPriority;
};

#endif /* IEVENT_H_ */
