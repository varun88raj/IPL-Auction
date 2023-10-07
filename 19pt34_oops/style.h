#ifndef style_h
#define style_h
#include <string>
#include <iostream>

using namespace std;
class style
{
public:
        string position="position";
        string type="type";
        string batting_hand="bat";
        string bowling_hand="bowl";
        string bowl_type="bowl_type";
        void SetData();
        char getPosition() const;
        char getType() const;
        char getBatting_hand() const;
        char getBowling_hand() const;
        char getBowling_type() const;
};
#endif
