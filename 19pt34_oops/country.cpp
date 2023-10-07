#include "country.h"

void country::SetData()
{
        do
        {
                cout<<"Enter Indian/foreigner ";
                cin>>Country;
        }while((Country=="Indian")&&(Country=="Foreigner"));
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
