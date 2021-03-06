/*
 * PriorityQueue.h
 *
 *  Created on: 15 March 2015
 *      Author: shaj
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include "Thread.h"
#include <vector>
//___for now
#include <iostream>

using namespace std;

class PriorityQueue {
public:
	PriorityQueue();
	virtual ~PriorityQueue();
	Thread * popElement();
	Thread * popElement(int id);
	int enqueueElement(Thread* toAdd);
	int getSize();
	void increaseSize();
	void decreaseSize();
	void removeElement(int id);
	void block(int id);
	void resume(int id);
	int isBlocked(int id);
private:
	vector< Thread*> * findInQueue(int id , int &loc);
	int findElement(int id , vector< Thread* >);
	 int _size;
	 vector< Thread * > _Red, _Orange, _Green, _Blocked;
};

#endif /* QUEUE_H_ */
