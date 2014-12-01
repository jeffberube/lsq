/*
 *	@Author:	Jeff Berube
 *	@Title:		queue.cpp
 *	@DescriptioN:	Queue class implementation
 *
 */

#include "queue.h"

using namespace std;

void Queue::store(int val) {

	if (!full()) p[(start + count++) % MAX_SIZE] = val;

}

int Queue::retrieve() {

	count--;
	return p[start++];  

}
