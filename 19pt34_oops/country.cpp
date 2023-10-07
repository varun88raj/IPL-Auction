#include <iostream>
#include <strings.h>
#include "country.h"
using namespace std;

country::country()
{
        strcpy(Country,"Country");
}
void country::SetData()
{
        do
        {
                cout<<"Enter Indian/foreigner ";
                cin>>Country;
        }while((strcmp(Country,"Indian")!=0)&&(strcmp(Country,"Foreigner")!=0));
        do
        {
                cout<<"Enter the base price ";
                cin>>base_price;
        }while(base_price!=2000000&&base_price!=20000000);
}
char country::getCountry() const
{
        return Country[0];
}
long int country::getPrice() const
{
        return base_price;
}
