#include "player.h"
player::player()
{
        c = std::make_unique<country>();
        s = std::make_unique<style>();
}
void player::setData()
{
        cout<<"Enter the player name ";
        cin>>name;
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
void player::printData() const
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
