/*
 *	@Author:	Jeff Berube
 * 	@Title:		stack.h
 *	@Description:	Contains Stack class definition
 *
 */

#ifndef __STACK_H__
#define __STACK_H__

#include "list.h"

using namespace std;

class Stack: public List {

	private:
		int MAX_SIZE;
		int count = 0;

	public:
		Stack(int size = 100): List(size) { MAX_SIZE = size; }

		bool empty() { return count == 0; }
		bool full() { return count == MAX_SIZE; }

		void store(int val);
		int retrieve(); 

};

#endif
