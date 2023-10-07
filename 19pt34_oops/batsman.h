#include "player.h"
#ifndef bat_h
#define bat_h
class batsman:virtual public player
{
private:
        int runs=0;
        float batting_average=0.0;
        float batting_strike_rate=0;
        int _50s=0;
        int _100s=0;
        int best_score=0;
public:
        batsman();
        void setData();
        void printData();
        virtual void retrieveData(char*,int,int,int,float,float,int,int,int,char*,char*,char*,char*,char*,char*,int);
        void filterData(int,int,float,float);
        int base();
        int foreign_player();
};
#endif
