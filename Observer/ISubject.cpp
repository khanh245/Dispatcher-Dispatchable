/*
 * ISubject.cpp
 *
 *  Created on: Jun 23, 2014
 *      Author: khanhn
 */

#include <stdexcept>
#include "ISubject.h"

#include <iostream>

ISubject::ISubject()
{
}

ISubject::~ISubject()
{
	if (observers.size() > 0)
	{
		for (unsigned i = 0; i < observers.size(); i++)
			if(observers[i]) delete observers[i];
		observers.clear();
	}
}

void ISubject::registerObserver(IObserver* obs)
{
	if (obs != NULL)
		observers.push_back(obs);
}

IObserver* ISubject::getObserver(const unsigned& id)
{
	IObserver* object = NULL;

	if (id-1 >= 0 && id-1 < observers.size())
		object = observers[id-1];

	return object;
}

IObserver* ISubject::removeObserver(const unsigned& id)
{
	IObserver* object = NULL;

	if (id-1 >= 0 && id-1 < observers.size())
	{
		object = observers[id-1];
		observers.erase(observers.begin() + (id - 1));
	}

	return object;
}

void ISubject::notifyObservers()
{
	for(unsigned i = 0; i < observers.size(); i++)
		observers[i]->update();
}
