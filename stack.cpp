/*
 *	@Author:	Jeff Berube
 *	@Title:		stack.cpp
 *	@DescriptioN:	Stack class implementation
 *
 */

#include "stack.h"

using namespace std;

void Stack::store(int val) {

	if (!full()) p[count++] = val;

}

int Stack::retrieve() {

	if (empty()) throw "Stack is empty";

	return p[--count];  

}
