#ifndef style_h
#define style_h
#include <string>
#include <iostream>

using namespace std;
class style
{

public:
        string position;
        string type;
        string batting_hand;
        string bowling_hand;
        string bowl_type;
        style();
        void SetData();
        char getPosition();
        char getType();
        char getBatting_hand();
        char getBowling_hand();
        char getBowling_type();
};
#endif
