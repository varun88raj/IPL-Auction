#include <stdlib.h>
#include "player.h"
player::player()
{
        player_id=0;
        strcpy(name,"name");
        matches=0;
        c=new country;
        s=new style;
}
void player::setData()
{
        cout<<"Enter the player name ";
        gets(name);
        fflush(stdin);
        do
        {
                cout<<"Enter the matches played ";
                cin>>matches;
        }while(matches<0);
        do
        {
                cout<<"Enter the player id ";
                cin>>player_id;
        }while(player_id<0);

}
void player::printData()
{
        cout<<player_id<<"\n";
        cout<<name<<"\n";
        cout<<matches<<"\n";
        cout<<c->Country<<"\n";
        cout<<c->base_price<<"\n";
        cout<<s->position<<"\n";
        cout<<s->type<<"\n";
        cout<<s->batting_hand<<"\n";
        cout<<s->bowling_hand<<"\n";
        cout<<s->bowl_type<<"\n";
}
