/*
 * Thread.h
 *
 *  Created on: Jun 23, 2014
 *      Author: khanhn
 */

#ifndef THREAD_H_
#define THREAD_H_

#include <pthread.h>

class Thread
{
public:
	Thread();
	virtual ~Thread() { }

protected:
	virtual void ThreadEntry() = 0;

private:
	pthread_t t;
};



#endif /* THREAD_H_ */
