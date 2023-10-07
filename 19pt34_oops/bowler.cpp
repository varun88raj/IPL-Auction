#include "bowler.h"
bowler::bowler()
{
        wickets=0;
        bowling_average=0;
        bowling_strike_rate=0;
        economy=0;
        _5_wicket_haul=0;
        _4_wicket_haul=0;
        best.runs_given=0;
        best.wickets_taken=0;
}
void bowler::setData()
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
void bowler::printData() const
{
        cout<<setw(4)<<player_id<<setw(20)<<name<<setw(4)<<matches<<setw(6)<<wickets<<setw(8)<<economy<<setw(8)<<bowling_average<<setw(8)<<bowling_strike_rate<<setw(4)<<_4_wicket_haul<<setw(4)<<_5_wicket_haul<<setw(6)<<best.runs_given<<"/"<<best.wickets_taken<<setw(15)<<s->position<<setw(15)<<s->type<<setw(15)<<s->bowl_type<<setw(15)<<s->batting_hand<<setw(15)<<s->batting_hand<<setw(15)<<c->Country<<setw(15)<<c->base_price<<"\n";
}
void bowler::retrieveData(char n[20],int m,int p,int w,float bowavg,float bowstr,float e,int _4,int _5,int br,int bw,char pos[20],char typ[20],char bah[20],char boh[20],char bowtyp[20],char co[20],int base)
{
        strcpy(name,n);
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
        strcpy(c->Country,co);
        strcpy(s->type,typ);
        strcpy(s->bowl_type,bowtyp);
        strcpy(s->bowling_hand,boh);
        strcpy(s->batting_hand,bah);
        strcpy(s->position,pos);
        c->base_price=base;
}
void bowler::filterData(int w,float bowavg,float bowstr,float eco) const
{
        if((wickets>w)&&((bowling_average<bowavg)||(bowavg==0))&&((bowling_strike_rate<bowstr)||(bowstr==0))&&((economy<eco)||(eco==0)))
        {
                printData();
        }
}
int bowler::base() const
{
        return c->base_price;
}
int bowler::foreign_player() const
{
        if(strcmp(c->Country,"Foreigner")==0)
        {
                return 1;
        }
        else
        {
                return -1;
        }
}
