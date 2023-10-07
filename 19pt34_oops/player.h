#include "style.h"
#include "country.h"
#include <memory>
#include <stdlib.h>
#ifndef player_h
#define player_h

class player
{
protected:
        int player_id=0;
        string name;
        int matches=0;
        std::unique_ptr<country> c;
        std::unique_ptr<style> s;
public:
        player();
        virtual void setData();
        virtual void printData() const;
};
#endif
