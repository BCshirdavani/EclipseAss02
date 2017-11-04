//============================================================================
// Name        : airlineDB.cpp
// Author      : Beau Shirdavani
// Version     : 2
// Copyright   : Your copyright notice
// Description : Airline DB - Assignment # 2
// Date		   : Nov 2, 2017
//============================================================================

#include "LinkedList.h"
#include "Passenger.h"
#include <iostream>
#include <typeinfo>
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

    Passenger* P_1;
    P_1 = new Passenger("steve", "smith", "5012 245th ave ne Redmond, WA 98052", "425-885-5535");
    //cout <<*P_1;

	LinkedList<Passenger>* listPASS;
	listPASS = new LinkedList<Passenger>();
    listPASS->inserFirst(*P_1);

//    cout << *listPASS << endl;            // FAILURE HERE
    cout << (*P_1).getFirstName() << endl;  // FAILURE HERE



	return 0;
}
