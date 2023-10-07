#include <iostream>
#include <string.h>
#include <stdio.h>
#include <iomanip>
#ifndef country_h
#define country_h
class country
{
private:
        char Country[20];
        long int base_price;
        
public:
        country();
        char getCountry();
        long int getPrice();
        void SetData();
};
#endif
