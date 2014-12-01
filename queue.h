/*
 *	@Author:	Jeff Berube
 *	@Title:		queue.h
 *	@Description:	Queue implementation using List baseclass
 *
 */

#ifndef __QUEUE_H__
#define __QUEUE_H__

#include "list.h"

using namespace std;

class Queue: public List {

	private:
		int MAX_SIZE;
		int count = 0;
		int start = 0;		

	public:
		Queue(int size = 100): List(size) { MAX_SIZE = size; }
		
		bool empty() { return count == 0; }
		bool full() { return count == MAX_SIZE; }
		
		void store(int val);
		int retrieve();


};

#endif
