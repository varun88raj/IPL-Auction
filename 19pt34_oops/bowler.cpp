#include "bowler.h"
using namespace std;
void bowler::setBowler()
{
        player::setData();
        do
        {
                 cout<<"Enter the wickets taken ";
                cin>>wickets;
        }while(wickets<0);
        do
        {
                cout<<"Enter the bowling average ";
                cin>>bowling_average;
        }while(bowling_average<0);
        do
        {
                cout<<"Enter the bowling strike rate ";
                cin>>bowling_strike_rate;
        }while(bowling_strike_rate<0);
        do
        {
                cout<<"Enter the bowling economy ";
                cin>>economy;
        }while(economy<0);
        do
        {
                cout<<"Enter the no of 4 wickets haul ";
                cin>>_4_wicket_haul;
        }while(_4_wicket_haul<0);
        do
        {
                cout<<"Enter the no of 5 wickets haul ";
                cin>>_5_wicket_haul;
        }while(_5_wicket_haul<0);
        do
        {
                cout<<"Enter the best bowling figures ";
                cin>>best.runs_given;
                cin>>best.wickets_taken;
        }while(best.wickets_taken>10);
        fflush(stdin);
}
void bowler::printBowler() const
{
        cout<<player_id<<"\n";
        cout<<name<<"\n";
        cout<<matches<<"\n";
        cout<<wickets<<"\n";
        cout<<economy<<"\n";
        cout<<bowling_average<<"\n";
        cout<<bowling_strike_rate<<"\n";
        cout<<_4_wicket_haul<<"\n";
        cout<<_5_wicket_haul<<"\n";
        cout<<best.runs_given<<"/"<<best.wickets_taken<<"\n";
        cout<<s->position<<"\n";
        cout<<s->type<<"\n";
        cout<<s->bowl_type<<"\n";
        cout<<s->bowling_hand<<"\n";
        cout<<c->Country<<"\n";
        cout<<c->base_price<<"\n";
}
void bowler::retrieveBowler(string &n,int m,int p,int w,float bowavg,float bowstr,float e,int _4,int _5,int br,int bw,string &pos,string &typ,string &bah,string &boh,string &bowtyp,string &co,int base)
{
        name=n;
        matches=m;
        player_id=p;
        wickets=w;
        bowling_average=bowavg;
        bowling_strike_rate=bowstr;
        economy=e;
        _4_wicket_haul=_4;
        _5_wicket_haul=_5;
        best.runs_given=br;
        best.wickets_taken=bw;
        c->Country=co;
        s->type=typ;
        s->bowl_type=bowtyp;
        s->bowling_hand=boh;
        s->batting_hand=bah;
        s->position=pos;
        c->base_price=base;
}
void bowler::filterBowler(int w,float bowavg,float bowstr,float eco) const
{
        if((wickets>w)&&((bowling_average<bowavg)||(bowavg==0))&&((bowling_strike_rate<bowstr)||(bowstr==0))&&((economy<eco)||(eco==0)))
        {
                printData();
        }
}
int bowler::base_of_bowl() const
{
        return c->base_price;
}
int bowler::foreign_player_of_bowl() const
{
        if(c->Country,"Foreigner")
        {
                return 1;
        }
        else
        {
                return -1;
        }
}
