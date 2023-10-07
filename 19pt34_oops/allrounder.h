#include "batsman.h"
#include "bowler.h"
class allrounder:public batsman,public bowler
{
public:
        void setAllRound();
        void printAllRound()const;
        void retrieveAllRound(std::string_view,int,int,int,float,float,int,int,int,int,float,float,float,int,int,int,int,std::string_view,std::string_view,std::string_view,std::string_view,std::string_view,std::string_view,int);
        void filterAllRound(int,int,float,float,int,float,float,float) const;
        int base_of_AllRound() const;
        int foreign_player_AllRound() const;
};
