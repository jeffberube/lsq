/*
 *	@Author:	Jeff Berube
 *	@Title:		main.cpp
 *	@Description:	Test unit for LSQ
 *
 */

#include <cstdlib>
#include <iostream>

#include "stack.h"
#include "queue.h"

using namespace std;

int main(int argc, char* argv[]) {

	Queue q(10);
	Stack s(10);

	cout << endl << "Pushing 10 random values onto the stack >> ";

	int tmp = 0;
	
	for (int i = 0; i < 10; i++) {

		tmp = rand() % 90 + 10;
		s.store(tmp);
		cout << tmp << " ";

	}

	cout << endl << "Popping all values off the stack >>        ";
	
	for (int i = 0; i < 10; i++)
		cout << s.retrieve() << " "; 

	cout << endl << endl << "Enqueuing 10 random values >> ";

	for (int i = 0; i < 10; i++) {

		tmp = rand() % 90 + 10;
		q.store(tmp);
		cout << tmp << " ";

	}

	cout << endl << "Dequeuing all values >>       ";

	for (int i = 0; i < 10; i++)
		cout << q.retrieve() << " ";

	
	cout << endl << endl;

	return 0;

}
