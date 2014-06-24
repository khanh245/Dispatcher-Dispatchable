/*
 * Accident.cpp
 *
 *  Created on: Jun 23, 2014
 *      Author: khanhn
 */

#include "Accident.h"

Accident::Accident(IEvent::Priority _p, IObserver* obs)
{
	mPriority = _p;
	registerObserver(obs);
}

Accident::~Accident()
{
}
