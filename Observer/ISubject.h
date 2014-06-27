/*
 * ISubject.h
 *
 *  Created on: Jun 23, 2014
 *      Author: khanhn
 */

#ifndef ISUBJECT_H_
#define ISUBJECT_H_

#include <vector>
#include "IObserver.h"

class ISubject
{
public:
	ISubject();
	virtual ~ISubject();

	void registerObserver(IObserver* obs);
	IObserver* getObserver(const unsigned& id);
	IObserver* removeObserver(const unsigned& id);

	void notifyObservers();

protected:
	std::vector <IObserver*> observers;
};

#endif /* ISUBJECT_H_ */
