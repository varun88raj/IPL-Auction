#include <iostream>
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include "user.h"
#include <fstream>
#include <vector>
#include <array>
#include <random>
#include "allrounder.h"
using namespace std;

int check(vector<int>sold,int iD)
{
        int n = sold.size();
        int flag3=0;
        for(int i=0;i<n;i++)
        {
                if(iD==sold[i])
                {
                        flag3=1;
                        break;
                }
        }
        if(flag3==1)
        {
                return -1;
        }
        else
        {
                return 1;
        }
}

int choose(array<details,8>& team,details& yourTeam)
{
        int flag=1;
        int choice;
        while(flag==1)
        {
                cout<<"Choose your team .\n(1).Mumbai Indians\n(2).Royal Challengers Bangalore\n(3).Kolkata Knight Riders\n(4).Chennai Super Kings\n(5).Kings XI Punjab\n(6).Delhi Capitals\n(7).Sun Risers Hyderabad\n(8).Rajasthan Royals\n";
                cin>>choice;
                if (choice>=9 || choice<1)
                {
                        cout<<"Invalid choice\n";
                        break;
                }
                for (int i=1;i<=8;i++)
                {
                        if(choice==i)
                        {
                                yourTeam=team[i-1];
                                flag=0;
                                cout<<"you have selected "<<yourTeam.team_name<<"\n";
                                break;
                        }
                }
        }
        yourTeam.display();
        return choice;
}
int instructions(details& yourteam)
{
        string username;
        int choice;
        cout<<"Enter user name ";
        cin>>username;
        cout<<"Welcome to ipl auction game "<<username<<"\n";
        array<details, 8> teams = {{
        {"Mumbai_Indians", 18, 6, 130500000, 3, 7, 5, 3},
        {"Royal_Challengers_Bangalore", 13, 2, 279000000, 4, 4, 4, 1},
        {"Kolkata_Knight_Riders", 14, 4, 356500000, 4, 7, 2, 1},
        {"Chennai_Super_Kings", 18, 6, 146000000, 5, 6, 5, 2},
        {"Kings_XI_Punjab", 12, 4, 427000000, 5, 7, 0, 2},
        {"Delhi_Capitals", 14, 3, 278500000, 4, 5, 4, 1},
        {"Sun_Risers_Hyderabad", 18, 6, 170000000, 3, 9, 3, 3},
        {"Rajasthan_Royals", 14, 4, 289000000, 4, 6, 2, 2}}};
        cout<<"/*************** Welcome to real cricket ipl auction game ***************/";
        cout<<"/***************           Rules of the game              ***************\n";
        cout<<"You can choose any of the eight teams.\nGenerally the maximum number of players in a team is 25.";
        cout<<"\nAnd a team can have maximum of 8 foreign players.\nThis depends upon the team you choose.\n";
        cout<<"After choosing a team you will be given their details.\nYou can apply whatever filter you want to choose your team players.";
        cout<<"\nBid and compete with other teams and build the best team.\n";
        choice = choose(teams,yourteam);
        return choice;
}

void retrieveBat(array<array<string, 24>, 15>& arrbat,array<batsman, 15>& Ba)
{
        for(int j=0;j<15;j++)
        {
                int k=0;
                string nam=arrbat[j][k];k++;
                int match=stoi((arrbat[j][k]));k++;
                int pd=stoi(arrbat[j][k]);k++;
                int run=stoi(arrbat[j][k]);k++;
                float bat_avg=stof(arrbat[j][k]);k++;
                float bat_str=stof(arrbat[j][k]);k++;
                int _50=stoi(arrbat[j][k]);k++;
                int _100=stoi(arrbat[j][k]);k++;
                int Best=stoi(arrbat[j][k]);k++;
                string pos=arrbat[j][k];k++;
                string typ=arrbat[j][k];k++;
                string bah=arrbat[j][k];k++;
                string boh=arrbat[j][k];k++;
                string bow_typ=arrbat[j][k];k++;
                string coun=arrbat[j][k];k++;
                int base=stoi(arrbat[j][k]);
                Ba[j].retrieveBatsman(nam,match,pd,run,bat_avg,bat_str,_50,_100,Best,pos,typ,bah,boh,bow_typ,coun,base);
        }
}
void retrieveBall(array<array<string, 24>, 15>& arrbow,array<bowler, 10>& Bo)
{
        for(int j=0;j<10;j++)
        {
                int k=0;
                string nam=arrbow[j][k];k++;
                int match=stoi((arrbow[j][k]));k++;
                int pd=stoi(arrbow[j][k]);k++;
                int wicket=stoi(arrbow[j][k]);k++;
                float bowl_avg=stof(arrbow[j][k]);k++;
                float bowl_str=stof(arrbow[j][k]);k++;
                float eco=stof(arrbow[j][k]);k++;
                int _4w=stoi(arrbow[j][k]);k++;
                int _5w=stoi(arrbow[j][k]);k++;
                int best_run=stoi(arrbow[j][k]);k++;
                int best_wic=stoi(arrbow[j][k]);k++;
                string pos=arrbow[j][k];k++;
                string typ=arrbow[j][k];k++;
                string bah=arrbow[j][k];k++;
                string boh=arrbow[j][k];k++;
                string bow_typ=arrbow[j][k];k++;
                string coun=arrbow[j][k];k++;
                int base=stoi(arrbow[j][k]);
                Bo[j].retrieveBowler(nam,match,pd,wicket,bowl_avg,bowl_str,eco,_4w,_5w,best_run,best_wic,pos,typ,bah,boh,bow_typ,coun,base);
        }
}

void retrieveAlr(array<array<string, 24>, 15>& arr,array<allrounder, 8>& Al)
{
        for(int j=0;j<8;j++)
        {
                        int k=0;
                        string nam=arr[j][k];k++;
                        int match=stoi((arr[j][k]));k++;
                        int pd=stoi(arr[j][k]);k++;
                        int run=stoi(arr[j][k]);k++;
                        float bat_avg=stof(arr[j][k]);k++;
                        float bat_str=stof(arr[j][k]);k++;
                        int _50=stoi(arr[j][k]);k++;
                        int _100=stoi(arr[j][k]);k++;
                        int Best=stoi(arr[j][k]);k++;
                        int wicket=stoi(arr[j][k]);k++;
                        float bowl_avg=stof(arr[j][k]);k++;
                        float bowl_str=stof(arr[j][k]);k++;
                        float eco=stof(arr[j][k]);k++;
                        int _4w=stoi(arr[j][k]);k++;
                        int _5w=stoi(arr[j][k]);k++;
                        int best_run=stoi(arr[j][k]);k++;
                        int best_wic=stoi(arr[j][k]);k++;
                        string coun=arr[j][k];k++;
                        string typ=arr[j][k];k++;
                        string bow_typ=arr[j][k];k++;
                        string boh=arr[j][k];k++;
                        string bah=arr[j][k];k++;
                        string pos=arr[j][k];k++;
                        int base=stoi(arr[j][k]);
                        Al[j].retrieveAllRound(nam,match,pd,run,bat_avg,bat_str,_50,_100,Best,wicket,bowl_avg,bowl_str,eco,_4w,_5w,best_run,best_wic,coun,typ,bow_typ,boh,bah,pos,base);
        }
}
void fileRead(const string& filename,array<array<string, 24>, 15>& arrPlayer,int Xmax,int Ymax)
{
        ifstream file1;
        file1.open(filename,ios::in);
        int x=0;
        int y=0;
        char ch1;
        arrPlayer[x][y]="";
        while(!file1.eof())
        {
                file1>>ch1;
                if(ch1!=',')
                {
                        arrPlayer[x][y]+=ch1;
                }
                else if(ch1==',')
                {
                        y++;
                        if(y==Ymax)
                        {
                                x++;
                                y=0;
                        }
                        if(x!=Xmax)
                        {
                                arrPlayer[x][y]="";
                        }
                }
        }
        file1.close();
}

void printDetails(array<batsman, 15>& Ba,array<bowler, 10>& Bo,array<allrounder, 8>& Al)
{
     for(int i=0;i<15;i++)
        {
                Ba[i].printBatsman();
                cout<<"\n-----------------\n";
        }
        for(int i=0;i<10;i++)
        {
                Bo[i].printBowler();
                cout<<"\n-----------------\n";
        }

        for(int i=0;i<8;i++)
        {
                Al[i].printAllRound();
                cout<<"\n-----------------\n";
        }
}

void filterBowler(array<bowler, 10>& Bo,array<allrounder, 8>& Al,int r,float avg,float str,int opinion,int match)
{
    int wicket;
    float bowl_avg;
    float bowl_str;
    float eco;
    cout<<"Enter your conditions for runs,batting average and strike rate. If no filter is needed enter 0\n";
    cout<<"Wickets\nBowling average\nBowling strike rate\nEconomy\n";
    cin>>wicket>>bowl_avg>>bowl_str>>eco;
    if(opinion==2)
    {
            for(int i=0;i<10;i++)
            {
                Bo[i].filterBowler(wicket,bowl_avg,bowl_str,eco);
            }
    }
    else
    {
            for(int i=0;i<8;i++)
            {
                Al[i].filterAllRound(match,r,avg,str,wicket,bowl_avg,bowl_str,eco);
            }
    }
}

void filterBatsman(array<batsman, 15>& Ba,array<bowler, 10>& Bo,array<allrounder, 8>& Al,int opinion,int match)
{
    int run;
    float bat_avg;
    float bat_str;
    cout<<"Enter your conditions for runs,batting average and strike rate. If no filter is needed enter 0\n";
    cout<<"Runs\nBatting average\nBatting strike rate\n";
    cin>>run>>bat_avg>>bat_str;
    if(opinion==1)
    {
        for(int i=0;i<15;i++)
        {
            Ba[i].filterBatsman(match,run,bat_avg,bat_str);
        }
    }
    else if(opinion == 3)
    {
        for(int i=0;i<10;i++)
        {
                filterBowler(Bo,Al,run,bat_avg,bat_str,opinion,match);
        }
    }
}


void filter(array<batsman, 15>& Ba,array<bowler, 10>& Bo,array<allrounder, 8>& Al)
{
    char chfilter;
    do{
                int opinion;
                int match;
                cout<<"Enter the list of players you want filter out and see \n(1).Batsman (2).Bowler (3).All-rounder \n";
                cin>>opinion;
                cout<<"Enter your conditions for matches if not needed input 0\n";
                cin>>match;
                if(opinion==1||opinion==3)
                {
                        filterBatsman(Ba,Bo,Al,opinion,match);
                }
                else if(opinion==2)
                {
                        filterBowler(Bo,Al,0,0,0,2,match);
                }
                cout<<"There may be chances that no players satisfy all your filters press 'y' to apply filter again \n\n";
                cin>>chfilter;
        }while(chfilter=='y');
}

int OtherTeamsBid(array<string, 8>& teams,int choice,int buy_id)
{
        long int bid=1000000;
        random_device rd;
        uniform_int_distribution teamDistribution(0, 7);
        uniform_int_distribution randomDistribution(0, 4);
        int random = randomDistribution(rd);
        int random_team = teamDistribution(rd);
        cout<<random<<"\n";
        cout<<random_team<<"\n";
        char ch_continue;
        for(int v=0;v<random;v++)
        {
                while(random_team==choice-1)
                {
                        random_team=teamDistribution(rd);
                }
                cout<<teams[random_team]<<" bids player "<<buy_id<<" for "<<bid<<"\n";
                cout<<"Wanna Continue ";
                cin>>ch_continue;
                bid+=1000000;
                if(ch_continue!='y')
                {
                        return 0;
                }
        }
        return bid;
}

long int checkPriceSlot(player* P,int flag,long int bid,details& yourteam)
{
        if((yourteam.no_of_players<25) && (yourteam.no_of_foreign_players<8||P->is_foreign_player()==-1))
        {
                long int total=P->get_base_price()+bid;
                if(P->is_foreign_player()==1)
                {
                        yourteam.no_of_foreign_players+=1;
                }
                if(flag==1)
                {
                        yourteam.no_of_batsmans+=1;
                }
                else if(flag==2)
                {
                        yourteam.no_of_bowlers+=1;
                }
                else
                {
                        yourteam.no_of_All_rounders+=1;
                }
                return total;
        }
        return 0;
}


void checkBuy(array<batsman, 15>& Ba,array<bowler, 10>& Bo,array<allrounder, 8>& Al,details& yourteam,int flag,int buy_id,long int bid)
{
        player* P;
        if(flag==1)
        {
                P = &Ba[buy_id-1];
        }
        else if(flag==2)
        {
                P = &Bo[buy_id-16];
        }
        else
        {
                P = &Al[buy_id-26];
        }
        long int total = checkPriceSlot(P,flag,bid,yourteam);
        if(total>0)
        {
                cout<<"base price + bid amount is "<<total<<"\n\n";
                cout<<"Congrats you have bought player no "<<buy_id<<"\n\n";
                yourteam.no_of_players+=1;
                yourteam.purse-=total;
        }
        else
        {
                cout<<"Sorry You dont have enough purse or your slots are full\n";
        }
}

int getFlag(int buy_id)
{
        int flag=0;
        if(buy_id>=1 && buy_id<=15)
        {
                flag=1;
        }
        else if(buy_id>=16 && buy_id<=25)
        {
                flag=2;
        }
        else if(buy_id>=26 && buy_id<=33)
        {
                flag=3;
        }
        return flag;
}

void BuyPlayers(array<string, 8>& teams,array<batsman, 15>& Ba,array<bowler, 10>& Bo,array<allrounder, 8>& Al,details& yourteam,int choice)
{
        vector<int>sold;
        int buy_id;
        char chbuy;
        do
        {
                long int bid=0;
                cout<<"Enter the player id you want to buy ";
                cin>>buy_id;
                int flag = getFlag(buy_id);
                if(check(sold,buy_id)==1)
                {
                        sold.push_back(buy_id);
                        bid = OtherTeamsBid(teams,choice,buy_id);
                        if ( bid > 0)
                        {
                                checkBuy(Ba,Bo,Al,yourteam,flag,buy_id,bid);
                        }
                        else
                        {
                                cout<<"You gave up Player bought by other team \n\n";
                        }
                }
                yourteam.display();
                cout<<"Continue buying players\n";
                cin>>chbuy;
        }while(chbuy=='y');
}


void user::Login() const
{
        details yourteam("name",0,0,0,0,0,0,0);
        int choice=instructions(yourteam);
        array<std::string, 8> teams = {"MI", "RCB", "KKR", "CSK", "KXIP", "DC", "SRH", "RR"};
        array<batsman, 15> Ba;
        array<bowler, 10> Bo;
        array<allrounder, 8> Al;
        cout<<"There are 15 available batsman 10 bowlers 8 all-rounders\n";
        array<array<string, 24>, 15> arrBat;
        array<array<string, 24>, 15> arrBow;
        array<array<string, 24>, 15> arrAlr;
        fileRead("batsman_list.txt",arrBat,15,16);
        fileRead("bowler_list.txt",arrBow,10,18);
        fileRead("all-rounder_list.txt",arrAlr,8,24);
        retrieveBat(arrBat,Ba);
        retrieveBall(arrBow,Bo);
        retrieveAlr(arrAlr,Al);
        printDetails(Ba,Bo,Al);
        filter(Ba,Bo,Al);
        cout<<"\n\nHope you have selected your players after filtering \n\n";
        BuyPlayers(teams,Ba,Bo,Al,yourteam,choice);
}
