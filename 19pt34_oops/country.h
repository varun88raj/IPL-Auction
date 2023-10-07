#include <iostream>
#include <string>
#include <stdio.h>
#include <iomanip>
#ifndef country_h
#define country_h

using namespace std;
class country
{

public:
        string Country;
        long int base_price=0;
        country();
        char getCountry() const;
        long int getPrice() const;
        void SetData();
};
#endif
