#include "player.h"
#ifndef bat_h
#define bat_h
class batsman:virtual public player
{
protected:
        int runs=0;
        float batting_average=0.0;
        float batting_strike_rate=0;
        int _50s=0;
        int _100s=0;
        int best_score=0;
public:
        virtual void setData() override;
        virtual void printData() override;
        void retrieveData(string,int,int,int,float,float,int,int,int,string,string,string,string,string,string,int) const;
        void filterData(int,int,float,float) const;
        int base() const;
        int foreign_player() const;
};
#endif
