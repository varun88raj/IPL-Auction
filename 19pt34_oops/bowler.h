#include "player.h"
#ifndef bf_h
#define bf_h
struct bowling_figures
{
        int runs_given;
        int wickets_taken;
};
#endif
class bowler:virtual public player
{
private:
        int wickets=0;
        float bowling_average=0.0;
        float bowling_strike_rate=0.0;
        float economy=0;
        int _5_wicket_haul=0;
        int _4_wicket_haul=0;
        bowling_figures best;
public:
        void setData();
        void printData();
        virtual void retrieveData(char*,int,int,int,float,float,float,int,int,int,int,char*,char*,char*,char*,char*,char*,int);
        void filterData(int,float,float,float);
        int base();
        int foreign_player();
};
