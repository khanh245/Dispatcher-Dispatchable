/*
 * Accident.cpp
 *
 *  Created on: Jun 23, 2014
 *      Author: khanhn
 */

#include "Accident.h"
#include "Traffic.h"

#include "Singleton.h"
#include "Dispatcher.h"

Accident::Accident(IEvent::Priority _p)
{
	mPriority = _p;
	mType = TRAFFIC_ACCIDENT;
	registerHandler(new Traffic());
	Singleton<Dispatcher>::GetInstance()->enqueue(this);
}

Accident::~Accident()
{
}
