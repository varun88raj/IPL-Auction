#include "player.h"
#ifndef bat_h
#define bat_h
class batsman:virtual public player
{
protected:
        int runs;
        float batting_average;
        float batting_strike_rate;
        int _50s;
        int _100s;
        int best_score;
public:
        //friend class filter;
        batsman();
        void setData();
        void printData();
        void retrieveData(char*,int,int,int,float,float,int,int,int,char*,char*,char*,char*,char*,char*,int);
        void filterData(int,int,float,float);
        int base();
        int foreign_player();
};
#endif
