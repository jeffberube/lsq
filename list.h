/*
 *	@Author:	Jeff Berube
 *	@Title:		list.h
 *	@Description:	Contains the class definition for a list object
 *
 */

#ifndef __LIST_H__
#define __LIST_H__

#include <cstdlib>
#include <vector>

using namespace std;

class List {

	protected:
		vector<int> p;

	public:
		List(int size = 100) { p.resize(size); }
		
		virtual bool empty() = 0;
		virtual bool full() = 0;
		virtual void store(int val) = 0;
		virtual int retrieve() = 0;

};

#endif 
