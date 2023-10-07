#include "batsman.h"
#include "bowler.h"
class allrounder:public batsman,public bowler
{
public:
        void setData() override;
        void printData() override;
        void Ar_retrieveData(char*,int,int,int,float,float,int,int,int,int,float,float,float,int,int,int,int,char*,char*,char*,char*,char*,char*,int);
        void Ar_filterData(int,int,float,float,int,float,float,float);
        int Ar_base();
        int Ar_foreign_player();
};
