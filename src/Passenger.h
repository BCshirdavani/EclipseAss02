/*
 * Passenger.h
 *
 *  Created on: Nov 3, 2017
 *      Author: shy
 */

#ifndef PASSENGER_H_
#define PASSENGER_H_

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;



//**************************************************************
//                                          Make Passenger Class
class Passenger{

private:
//    Passenger(const Passenger&) = delete;     //copy constructor
    string mFirstName;
    string mLastName;
    string mAddress;
    string mPhone;
public:
    Passenger& operator=(Passenger&);
    string getFirstName();
    string getLastName();
    string getAddress();
    string getPhone();
    void setFirstName(string);
    void setLastName(string);
    void setAddress(string);
    void setPhone(string);
    Passenger();                            // defult constructor
    Passenger(string, string, string, string);
    friend ostream& operator<<(ostream& os, Passenger& person);
};

//**************************************************************
//                                          define << operator
template <class T>
 ostream& operator<<(ostream& os, Passenger& p){
    cout << p.getFirstName() << " " << p.getLastName() << " [" << p.getAddress() << "] [" << p.getPhone() << " ]";
}




#endif /* PASSENGER_H_ */
