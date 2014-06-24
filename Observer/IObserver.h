/*
 * IObserver.h
 *
 *  Created on: Jun 23, 2014
 *      Author: khanhn
 */

#ifndef IOBSERVER_H_
#define IOBSERVER_H_

class IObserver
{
public:
	virtual ~IObserver() { }
	virtual void update() = 0;
};

#endif /* IOBSERVER_H_ */
