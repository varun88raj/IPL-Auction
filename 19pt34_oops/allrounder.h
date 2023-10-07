#include "batsman.h"
#include "bowler.h"
class allrounder:public batsman,public bowler
{
public:
        void setData() override;
        void printData() override;
        void Ar_retrieveData(string,int,int,int,float,float,int,int,int,int,float,float,float,int,int,int,int,string,string,string,string,string,string,int) const;
        void Ar_filterData(int,int,float,float,int,float,float,float) const;
        int Ar_base() const;
        int Ar_foreign_player() const;
};
