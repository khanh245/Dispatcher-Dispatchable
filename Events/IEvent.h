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

enum EventType
{
	TRAFFIC_ACCIDENT = 0,
	UNKNOWN = -1
};

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

	bool operator> (const IEvent& RHS) const;

	Priority getPriority() { return mPriority; }
	EventType getEventType() { return mType; }

protected:
	Priority mPriority;
	EventType mType;
};

#endif /* IEVENT_H_ */
