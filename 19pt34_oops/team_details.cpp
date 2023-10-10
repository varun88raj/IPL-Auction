#include <iostream>
#include"team_details.h"
using namespace std;
details::details(const std::string& name, int players, int foreign_players,long long int team_purse, int batsmans, int bowlers,
            int all_rounders, int wicketkeepers): team_name(name), no_of_players(players), no_of_foreign_players(foreign_players),
            purse(team_purse), no_of_batsmans(batsmans), no_of_bowlers(bowlers),
            no_of_All_rounders(all_rounders), no_of_wicketkeepers(wicketkeepers){}


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

