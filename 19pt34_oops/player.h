#include "style.h"
#include "country.h"
#ifndef player_h
#define player_h
//class filter;
class player
{
private:
        int player_id;
        char name[20];
        int matches;
        country*c;
        style*s;
public:
        player();
        virtual void setData();
        virtual void printData();
};
#endif
