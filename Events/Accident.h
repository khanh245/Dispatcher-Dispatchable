/*
 * Accident.h
 *
 *  Created on: Jun 20, 2014
 *      Author: khanhn
 */

#ifndef ACCIDENT_H_
#define ACCIDENT_H_

#include "IEvent.h"

class Accident : public IEvent
{
public:
	Accident(IEvent::Priority _p, IObserver* obs);
	virtual ~Accident();
};

#endif /* ACCIDENT_H_ */
