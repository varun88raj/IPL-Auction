#ifndef style_h
#define style_h
class style
{
private:
        char position[20];
        char type[20];
        char batting_hand[10];
        char bowling_hand[10];
        char bowl_type[10];
public:
        style();
        void SetData();
        char getPosition();
        char getType();
        char getBatting_hand();
        char getBowling_hand();
        char getBowling_type();
};
#endif

