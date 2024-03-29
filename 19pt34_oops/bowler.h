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
protected:
        int wickets=0;
        float bowling_average=0.0;
        float bowling_strike_rate=0.0;
        float economy=0;
        int _5_wicket_haul=0;
        int _4_wicket_haul=0;
        bowling_figures best;
public:
        void setBowler();
        void printBowler() const;
        void retrieveBowler(std::string_view,int,int,int,float,float,float,int,int,int,int,std::string_view,std::string_view,std::string_view,std::string_view,std::string_view,std::string_view,int);
        void filterBowler(int,float,float,float) const;
        int base_of_bowl() const;
        int foreign_player_of_bowl() const;
};
