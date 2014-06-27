/*
 * IEvent.h
 *
 *  Created on: Jun 20, 2014
 *      Author: khanhn
 *  Purpose: Interface for all events
 */

#ifndef IEVENT_H_
#define IEVENT_H_

#include <vector>

class IEvent;

class IDispatchable
{
public:
	virtual ~IDispatchable() { }
	virtual void handleEvent (IEvent* _event) = 0;
};

enum EventType
{
	TRAFFIC_ACCIDENT = 0,
	UNKNOWN = -1
};

class IEvent
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

	void registerHandler(IDispatchable* obs);
	IDispatchable* getHandler(const unsigned& id);
	IDispatchable* removeHandler(const unsigned& id);

	void notifyHandlers();

protected:
	Priority mPriority;
	EventType mType;

	std::vector<IDispatchable*> handlers;
};

#endif /* IEVENT_H_ */
