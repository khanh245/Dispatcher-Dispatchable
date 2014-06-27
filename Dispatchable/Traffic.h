/*
 * Traffic.h
 *
 *  Created on: Jun 23, 2014
 *      Author: khanhn
 */

#ifndef TRAFFIC_H_
#define TRAFFIC_H_

#include "IEvent.h"

class Traffic : public IDispatchable
{
public:
	Traffic();
	~Traffic();

	void handleEvent(IEvent* _event);
	void update();
};

#endif /* TRAFFIC_H_ */
