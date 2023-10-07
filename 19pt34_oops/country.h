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
        string Country = "Country";
        long int base_price=0;
        char getCountry() const;
        long int getPrice() const;
        void SetData();
};
#endif
