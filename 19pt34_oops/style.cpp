#include "style.h"

void style::SetData()
{
        do
        {
                cout<<"Enter the batting position ";
                cin>>position;
        }while((position=="opener")&&(position=="middle-order")&&(position=="finisher")&&(position=="tailender"));
        do
        {
                cout<<"Enter the batting type ";
                cin>>type;
        }while((type=="aggressive")&&(type=="balanced")&&(type=="defensive"));
        do
        {
                cout<<"Enter the batting hand ";
                cin>>batting_hand;
        }while((batting_hand=="right")&&(batting_hand=="left"));
        do
        {
                cout<<"Enter the bowling hand ";
                cin>>bowling_hand;
        }while((bowling_hand=="right")&&(bowling_hand=="left"));
        do
        {
                cout<<"Enter the bowling type ";
                cin>>bowl_type;
        }while((bowl_type=="Fast")&&(bowl_type=="off-spin")&&(bowl_type=="leg-spin"));
}
char style::getPosition() const
{
        return position[0];
}
char style::getType() const
{
        return type[0];
}
char style::getBatting_hand() const
{
        return batting_hand[0];
}
char style::getBowling_hand() const
{
        return bowling_hand[0];
}
char style::getBowling_type() const
{
        return bowl_type[0];
}

