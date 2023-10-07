#include "style.h"
#include "country.h"
#include <memory>
#ifndef player_h
#define player_h
class player
{
private:
        int player_id=0;
        char name[20];
        int matches=0;
        std::unique_ptr<country> c;
        std::unique_ptr<style> s;
public:
        player();
        virtual void setData();
        virtual void printData();
};
#endif
