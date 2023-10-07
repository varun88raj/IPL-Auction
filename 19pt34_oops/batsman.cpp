#include "batsman.h"

void batsman::setData()
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
void batsman::printData() const
{
        cout<<setw(4)<<player_id<<setw(20)<<name<<setw(4)<<matches<<setw(8)<<runs<<setw(8)<<batting_average<<setw(8)<<batting_strike_rate<<setw(6)<<_50s<<setw(6)<<_100s<<setw(6)<<best_score<<setw(15)<<s->position<<setw(15)<<s->type<<setw(15)<<s->bowl_type<<setw(15)<<s->batting_hand<<setw(15)<<s->batting_hand<<setw(15)<<c->Country<<setw(15)<<c->base_price<<"\n";
}
void batsman::retrieveData(char n[20],int m,int p,int r,float batavg,float batstr,int fif,int hun,int b,char pos[20],char typ[20],char bah[20],char boh[20],char bowtyp[20],char co[20],int base)
{
        strcpy(name,n);
        matches=m;
        player_id=p;
        runs=r;
        batting_average=batavg;
        batting_strike_rate=batstr;
        _50s=fif;
        _100s=hun;
        best_score=b;
        strcpy(c->Country,co);
        strcpy(s->type,typ);
        strcpy(s->bowl_type,bowtyp);
        strcpy(s->bowling_hand,boh);
        strcpy(s->batting_hand,bah);
        strcpy(s->position,pos);
        c->base_price=base;
}
void batsman::filterData(int m,int r,float batavg,float batstr) const
{
        if((matches>m)&&(runs>r)&&(batting_average>batavg)&&(batting_strike_rate>batstr))
        {
                printData();
        }
}
int batsman::base() const
{
        return c->base_price;
}
int batsman::foreign_player() const
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
