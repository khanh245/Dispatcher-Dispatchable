/*
 * Traffic.cpp
 *
 *  Created on: Jun 23, 2014
 *      Author: khanhn
 */

#include "Traffic.h"

#include <iostream>

Traffic::Traffic()
{
}

Traffic::~Traffic()
{
}

void Traffic::handleEvent(IEvent* _event)
{
	switch(_event->getEventType())
	{
	case TRAFFIC_ACCIDENT:
		std::cerr << "This is handled..." << std::endl;
		break;
	default:
		std::cerr << "Unknown event" << std::endl;
		break;
	}
}
