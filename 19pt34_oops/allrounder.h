#include "batsman.h"
#include "bowler.h"
class allrounder:public batsman,public bowler
{
public:
        void setData();
        void printData();
        void retrieveData(char*,int,int,int,float,float,int,int,int,int,float,float,float,int,int,int,int,char*,char*,char*,char*,char*,char*,int);
        void filterData(int,int,float,float,int,float,float,float);
        int base();
        int foreign_player();
};
