#include <iostream>
#include"team_details.h"
using namespace std;

void details::setdetails(int n,int fn,long int p,int ba,int bo,int a,int w)
{
        no_of_players=n;
        no_of_foreign_players=fn;
        purse=p;
        no_of_batsmans=ba;
        no_of_bowlers=bo;
        no_of_All_rounders=a;
        no_of_wicketkeepers=w;
}
void details::display() const
{
        cout<<"Slots remaining         :"<<25-no_of_players<<"\n";
        cout<<"Foreign slots remaining :"<<8-no_of_foreign_players<<"\n";
        cout<<"Purse remaing           :"<<purse<<"\n";
        cout<<"Existing team details \n";
        cout<<"No of batsman           :"<<no_of_batsmans<<"\n";
        cout<<"No of bowler            :"<<no_of_bowlers<<"\n";
        cout<<"No of all rounders      :"<<no_of_All_rounders<<"\n";
        cout<<"No of wicket-keepers    :"<<no_of_wicketkeepers<<"\n";
}

