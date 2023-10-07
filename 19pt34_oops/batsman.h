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
        void setBatsman();
        void printBatsman() const;
        void retrieveBatsman(std::string_view,int,int,int,float,float,int,int,int,std::string_view,std::string_view,std::string_view,std::string_view,std::string_view,std::string_view,int);
        void filterBatsman(int,int,float,float) const;
        int base_of_bat() const;
        int foreign_player_of_bat() const;
};
#endif
