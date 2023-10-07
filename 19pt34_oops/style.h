#ifndef style_h
#define style_h
#include <string>
#include <iostream>

class style
{
public:
        std::string position="position";
        std::string type="type";
        std::string batting_hand="bat";
        std::string bowling_hand="bowl";
        std::string bowl_type="bowl_type";
        void SetData();
        char getPosition() const;
        char getType() const;
        char getBatting_hand() const;
        char getBowling_hand() const;
        char getBowling_type() const;
};
#endif
