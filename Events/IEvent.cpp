/*
 * IEvent.cpp
 *
 *  Created on: Jun 24, 2014
 *      Author: khanhn
 */

#include "IEvent.h"
#include <stdexcept>

IEvent::IEvent()
{
	mPriority = UNSET;
	mType = UNKNOWN;
}

IEvent::~IEvent()
{
	if (handlers.size() > 0)
	{
		for (unsigned i = 0; i < handlers.size(); i++)
			if(handlers[i]) delete handlers[i];
		handlers.clear();
	}
}

bool IEvent::operator> (const IEvent& RHS) const
{
	return ((int)mPriority > (int)RHS.mPriority);
}

void IEvent::registerHandler(IDispatchable* obs)
{
	if (obs != NULL)
		handlers.push_back(obs);
}

IDispatchable* IEvent::getHandler(const unsigned& id)
{
	IDispatchable* object = NULL;

	if (id-1 >= 0 && id-1 < handlers.size())
		object = handlers[id-1];

	return object;
}

IDispatchable* IEvent::removeHandler(const unsigned& id)
{
	IDispatchable* object = NULL;

	if (id-1 >= 0 && id-1 < handlers.size())
	{
		object = handlers[id-1];
		handlers.erase(handlers.begin() + (id - 1));
	}

	return object;
}

void IEvent::notifyHandlers()
{
	for(unsigned i = 0; i < handlers.size(); i++)
		handlers[i]->handleEvent(this);
}
