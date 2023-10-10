#include "allrounder.h"
using namespace std;
void allrounder::setAllRound()
{
        batsman::setData();
        bowler::setData();
}
void allrounder::printAllRound() const
{
        cout<<player_id<<"\n";
        cout<<name<<"\n";
        cout<<matches<<"\n";
        cout<<runs<<"\n";
        cout<<batting_average<<"\n";
        cout<<batting_strike_rate<<"\n";
        cout<<_50s<<"\n";
        cout<<_100s<<"\n";
        cout<<wickets<<"\n";
        cout<<economy<<"\n";
        cout<<bowling_average<<"\n";
        cout<<bowling_strike_rate<<"\n";
        cout<<_4_wicket_haul<<"\n";
        cout<<_5_wicket_haul<<"\n";
        cout<<best.runs_given<<"/"<<best.wickets_taken<<"\n";
        cout<<best_score<<"\n";
        cout<<s->position<<"\n";
        cout<<s->type<<"\n";
        cout<<s->batting_hand<<"\n";
        cout<<s->bowling_hand<<"\n";
        cout<<c->Country<<"\n";
        cout<<c->base_price<<"\n";
}
void allrounder::retrieveAllRound(string_view n,int m,int p,int r,float batavg,float batstr,int fif,int hun,int b,int w,float bowavg,float bowstr,float eco,int _4w,int _5w,int bestrun,int bestwic,string_view co,string_view typ,string_view bowtyp,string_view boh,string_view bah,string_view pos,int base)
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
void allrounder::filterAllRound(int m,int r,float batavg,float batstr,int w,float bowavg,float bowstr,float eco) const
{
        if((matches>m)&&(runs>r)&&(batting_average>batavg)&&(batting_strike_rate>batstr)&&(wickets>w)&&((bowling_average<bowavg)||(bowavg==0))&&((bowling_strike_rate<bowstr)||(bowstr==0))&&((economy<eco)||(eco==0)))
        {
                printAllRound();
        }
}
int allrounder::base_of_AllRound() const
{
        return c->base_price;
}
int allrounder::foreign_player_AllRound() const
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
