#include "allrounder.h"
void allrounder::setData()
{
        batsman::setData();
        bowler::setData();
}
void allrounder::printData() const
{
        cout<<setw(4)<<player_id<<setw(20)<<name<<setw(4)<<matches<<setw(6)<<runs<<setw(8)<<batting_average<<setw(8)<<batting_strike_rate<<setw(6)<<_50s<<setw(6)<<_100s<<setw(6)<<best_score<<setw(6)<<wickets<<setw(8)<<bowling_average<<setw(8)<<bowling_strike_rate<<setw(8)<<economy<<setw(4)<<_4_wicket_haul<<setw(4)<<_5_wicket_haul<<setw(6)<<best.runs_given<<"/"<<best.wickets_taken
        <<setw(15)<<s->position<<setw(15)<<s->type<<setw(10)<<s->bowl_type<<setw(8)<<s->batting_hand<<setw(8)<<s->batting_hand<<setw(15)<<c->Country<<setw(10)<<c->base_price<<"\n";
}
void allrounder::Ar_retrieveData(string n,int m,int p,int r,float batavg,float batstr,int fif,int hun,int b,int w,float bowavg,float bowstr,float eco,int _4w,int _5w,int bestrun,int bestwic,string co,string typ,string bowtyp,string boh,string bah,string pos,int base) const
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
        wickets=w;
        bowling_average=bowavg;
        bowling_strike_rate=bowstr;
        economy=eco;
        _4_wicket_haul=_4w;
        _5_wicket_haul=_5w;
        best.runs_given=bestrun;
        best.wickets_taken=bestwic;
        c->Country=co;
        s->type=typ;
        s->bowl_type=bowtyp;
        s->bowling_hand=boh;
        s->batting_hand=bah;
        s->position=pos;
        c->base_price=base;
}
void allrounder::Ar_filterData(int m,int r,float batavg,float batstr,int w,float bowavg,float bowstr,float eco) const
{
        if((matches>m)&&(runs>r)&&(batting_average>batavg)&&(batting_strike_rate>batstr)&&(wickets>w)&&((bowling_average<bowavg)||(bowavg==0))&&((bowling_strike_rate<bowstr)||(bowstr==0))&&((economy<eco)||(eco==0)))
        {
                printData();
        }
}
int allrounder::Ar_base() const
{
        return c->base_price;
}
int allrounder::Ar_foreign_player() const
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
