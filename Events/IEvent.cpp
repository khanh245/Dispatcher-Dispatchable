/*
 * IEvent.cpp
 *
 *  Created on: Jun 24, 2014
 *      Author: khanhn
 */

#include "IEvent.h"

IEvent::IEvent()
{
	mPriority = UNSET;
}

IEvent::~IEvent()
{

}

bool IEvent::operator< (const IEvent& RHS) const
{
	return ((int)mPriority < (int)RHS.mPriority);
}
