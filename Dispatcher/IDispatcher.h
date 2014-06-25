/*
 * IDispatcher.h
 *
 *  Created on: Jun 19, 2014
 *      Author: khanhn
 *
 *  Purpose: Provide an interface for a dispatchable object
 */

#ifndef IDISPATCHER_H_
#define IDISPATCHER_H_

#include <queue>
#include <functional>
#include "IEvent.h"

template <typename TYPE, typename Compare = std::less<IEvent> >
struct EventComparison	:	public std::binary_function<TYPE*, TYPE*, bool>
{
	bool operator() (const TYPE* LHS, const TYPE* RHS) const
	{
		return Compare()(*LHS, *RHS);
	}
};

class IDispatcher
{
public:
	IDispatcher();
	virtual ~IDispatcher();

	virtual void enqueue(IEvent* e) = 0;
	virtual IEvent* dequeue() = 0;

	int count() const { return priorityQueue.size(); }

protected:
	std::priority_queue<IEvent*, std::vector<IEvent*>, EventComparison<IEvent> > priorityQueue;
};

#endif /* IDISPATCHER_H_ */
