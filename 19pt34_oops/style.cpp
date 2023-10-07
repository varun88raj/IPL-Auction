#include <iostream>
using namespace std;
#include <strings.h>
#include "style.h"
style::style()
{
        //cout<<sizeof(style)<<"\n";
        strcpy(position,"position");
        strcpy(type,"type");
        strcpy(batting_hand,"bat");
        strcpy(bowling_hand,"bowl");
        strcpy(bowl_type,"bowl_type");
        //SetData();
}
void style::SetData()
{
        do
        {
                cout<<"Enter the batting position ";
                cin>>position;
        }while((strcmp(position,"opener")!=0)&&(strcmp(position,"middle-order")!=0)&&(strcmp(position,"finisher")!=0)&&(strcmp(position,"tailender")!=0));
        do
        {
                cout<<"Enter the batting type ";
                cin>>type;
        }while((strcmp(type,"aggressive")!=0)&&(strcmp(type,"balanced")!=0)&&(strcmp(type,"defensive")!=0));
        do
        {
                cout<<"Enter the batting hand ";
                cin>>batting_hand;
        }while((strcmp(batting_hand,"right")!=0)&&(strcmp(batting_hand,"left")!=0));
        do
        {
                cout<<"Enter the bowling hand ";
                cin>>bowling_hand;
        }while((strcmp(bowling_hand,"right")!=0)&&(strcmp(bowling_hand,"left")!=0));
        do
        {
                cout<<"Enter the bowling type ";
                cin>>bowl_type;
        }while((strcmp(bowl_type,"Fast")!=0)&&(strcmp(bowl_type,"off-spin")!=0)&&(strcmp(bowl_type,"leg-spin")!=0));
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

