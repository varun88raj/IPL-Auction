#include "batsman.h"
using namespace std;
void batsman::setBatsman()
{
        player::setData();
        do
        {
                cout<<"Enter the runs scored ";
                cin>>runs;
        }while(runs<0);
        do
        {
                cout<<"Enter the batting average ";
                cin>>batting_average;
        }while(batting_average<0);
        do
        {
                cout<<"Enter the strike rate ";
                cin>>batting_strike_rate;
        }while(batting_strike_rate<0);
        do
        {
                cout<<"Enter the no of fifties ";
                cin>>_50s;
        }while(_50s<0&&_50s>matches);
        do
        {
                cout<<"Enter the no of hundreds ";
                cin>>_100s;
        }while(_100s<0&&_100s>matches);
        do
        {
                cout<<"Enter the best score ";
                cin>>best_score;
        }while(best_score<0);
        fflush(stdin);
}
void batsman::printBatsman() const
{
        cout<<player_id<<"\n";
        cout<<name<<"\n";
        cout<<matches<<"\n";
        cout<<runs<<"\n";
        cout<<batting_average<<"\n";
        cout<<batting_strike_rate<<"\n";
        cout<<_50s<<"\n";
        cout<<_100s<<"\n";
        cout<<best_score;
        cout<<s->position<<"\n";
        cout<<s->type<<"\n";
        cout<<s->batting_hand<<"\n";
        cout<<c->Country<<"\n";
        cout<<c->base_price<<"\n";
}
void batsman::retrieveBatsman(string n,int m,int p,int r,float batavg,float batstr,int fif,int hun,int b,string pos,string typ,string bah,string boh,string bowtyp,string co,int base)
{
        name=n;
        matches=m;
        player_id=p;
        runs=r;
        batting_average=batavg;
        batting_strike_rate=batstr;
        _50s=fif;
        _100s=hun;
        best_score=b;
        c->Country=co;
        s->type=typ;
        s->bowl_type=bowtyp;
        s->bowling_hand=boh;
        s->batting_hand=bah;
        s->position=pos;
        c->base_price=base;
}
void batsman::filterBatsman(int m,int r,float batavg,float batstr) const
{
        if((matches>m)&&(runs>r)&&(batting_average>batavg)&&(batting_strike_rate>batstr))
        {
                printData();
        }
}
int batsman::base_of_bat() const
{
        return c->base_price;
}
int batsman::foreign_player_of_bat() const
{
        if(c->Country=="Foreigner")
        {
                return 1;
        }
        else
        {
                return -1;
        }
}
