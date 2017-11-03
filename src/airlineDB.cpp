//============================================================================
// Name        : airlineDB.cpp
// Author      : Beau Shirdavani
// Version     : 2
// Copyright   : Your copyright notice
// Description : Airline DB - Assignment # 2
// Date		   : Nov 2, 2017
//============================================================================

#include "LinkedList.h"
#include <iostream>
using namespace std;

int main() {
	int x = 5;
	int y = 6;
	int z = 7;

	LinkedList<int>* listPTR;
	listPTR = new LinkedList<int>();

	listPTR->inserFirst(x);
	listPTR->inserFirst(y);
	listPTR->inserFirst(z);

	cout << "List contains:" << endl;
	cout << *listPTR << endl;


	return 0;
}
