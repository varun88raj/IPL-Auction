#include "style.h"
#include "country.h"
#ifndef player_h
#define player_h
//class filter;
class player
{
protected:
        int player_id;
        char name[20];
        int matches;
public:
        country*c;
        style*s;
        player();
        void setData();
        void printData();
};
#endif
