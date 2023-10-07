#include <iostream>
#include <string>
#include <stdio.h>
#include <iomanip>
#ifndef country_h
#define country_h

class country
{

public:
        std::string Country = "Country";
        long int base_price=0;
        char getCountry() const;
        long int getPrice() const;
        void SetData();
};
#endif
