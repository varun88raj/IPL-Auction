#include <iostream>
using namespace std;
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "user.h"
#include <fstream>
#include "allrounder.h"
int sold[33];
int sold_index;
int check(int iD)
{
        int flag3=0;
        for(int i=0;i<33;i++)
        {
                if(iD==sold[i])
                {
                        flag3=1;
                        break;
                }
        }
        if(flag3==1)
        {
                return -1;
        }
        else
        {
                return 1;
        }
}
float myatof(char temp[20])
{
        float res1=0,res2=0,result;
        int j=1;
        int r,i;
        for(i=strlen(temp)-1;temp[i]!='.';i--)
        {
              r=int(temp[i]-48);
              res1+=j*r;
              j=j*10;
        }
        j=1;
        for(int k=i-1;k>=0;k--)
        {
              r=int(temp[k]-48);
              res2+=j*r;
              j=j*10;
        }
        result=res2+res1/100;
        return result;
}
int myatoi(char temp[20])
{
        int result=0;
        int j=1;
        int r;
        for(int i=strlen(temp)-1;i>=0;i--)
        {
                r=int(temp[i]-48);
                result+=j*r;
                j=j*10;
        }
        return result;
}
void user::Login()
{
        char un[20];
        cout<<"Enter user name ";
        cin>>un;
        fflush(stdin);
        strcpy(username,un);
        cout<<"Welcome to ipl auction game "<<username<<"\n";
        int flag=1;
        int choice;
        details Mumbai_Indians;
        details Royal_Challengers_Bangalore;
        details Kolkata_Knight_Riders;
        details Chennai_Super_Kings;
        details Kings_XI_Punjab;
        details Delhi_Capitals;
        details Sun_Risers_Hyderabad;
        details Rajasthan_Royals;
        Mumbai_Indians.setdetails(18,6,130500000,3,7,5,3);
        Royal_Challengers_Bangalore.setdetails(13,2,279000000,4,4,4,1);
        Kolkata_Knight_Riders.setdetails(14,4,356500000,4,7,2,1);
        Chennai_Super_Kings.setdetails(18,6,146000000,5,6,5,2);
        Kings_XI_Punjab.setdetails(12,4,427000000,5,7,0,2);
        Delhi_Capitals.setdetails(14,3,278500000,4,5,4,1);
        Sun_Risers_Hyderabad.setdetails(18,6,170000000,3,9,3,3);
        Rajasthan_Royals.setdetails(14,4,289000000,4,6,2,2);
        details yourteam;
        cout<<"/*************** Welcome to real cricket ipl auction game ***************/";
        //PlaySound(TEXT("ipl-9284.wav"),NULL,SND_SYNC);
        cout<<"/***************           Rules of the game              ***************\n";
        cout<<"You can choose any of the eight teams.\nGenerally the maximum number of players in a team is 25.";
        cout<<"\nAnd a team can have maximum of 8 foreign players.\nThis depends upon the team you choose.\n";
        cout<<"After choosing a team you will be given their details.\nYou can apply whatever filter you want to choose your team players.";
        cout<<"\nBid and compete with other teams and build the best team.\n";
        while(flag==1)
        {
                cout<<"Choose your team .\n";
                cout<<"(1).Mumbai Indians\n";
                cout<<"(2).Royal Challengers Bangalore\n";
                cout<<"(3).Kolkata Knight Riders\n";
                cout<<"(4).Chennai Super Kings\n";
                cout<<"(5).Kings XI Punjab\n";
                cout<<"(6).Delhi Capitals\n";
                cout<<"(7).Sun Risers Hyderabad\n";
                cout<<"(8).Rajasthan Royals\n";
                cin>>choice;
                switch(choice)
                {
                        case 1:
                        {
                                cout<<"You have selected Mumbai Indians \n";
                                yourteam=Mumbai_Indians;
                                flag=0;
                                break;
                        }
                        case 2:
                        {
                                cout<<"You have selected Royal Challengers Bangalore\n";
                                yourteam=Royal_Challengers_Bangalore;
                                flag=0;
                                break;
                        }
                        case 3:
                        {
                                cout<<"You have selected Kolkata Knight Riders\n";
                                yourteam=Kolkata_Knight_Riders;
                                flag=0;
                                break;
                        }
                        case 4:
                        {
                                cout<<"You have selected Chennai Super Kings\n";
                                yourteam=Chennai_Super_Kings;
                                flag=0;
                                break;
                        }
                        case 5:
                        {
                                cout<<"You have selected Kings XI Punjab\n";
                                yourteam=Kings_XI_Punjab;
                                flag=0;
                                break;
                        }
                        case 6:
                        {
                                cout<<"You have selected Delhi Capitals\n";
                                yourteam=Delhi_Capitals;
                                flag=0;
                                break;
                        }
                        case 7:
                        {
                                cout<<"You have selected Sun Risers Hyderabad\n";
                                yourteam=Sun_Risers_Hyderabad;
                                flag=0;
                                break;
                        }
                        case 8:
                        {
                                cout<<"You have selected Rajasthan Royals\n";
                                yourteam=Rajasthan_Royals;
                                flag=0;
                                break;
                        }
                        default:
                        {
                                cout<<"Invalid choice enter again \n";
                                flag=1;
                        }
                }
        }
        yourteam.display();
        char teams[8][5]={"MI","RCB","KKR","CSK","KXIP","DC","SRH","RR"};
        char nam[20];
        char coun[20];
        char typ[20];
        char bow_typ[20];
        char boh[20];
        char bah[20];
        char pos[20];
        int match,pd,run,_50,_100,Best,wicket,_4w,_5w,best_run,best_wic;
        float bat_avg,bat_str,bowl_avg,bowl_str,eco;
        int base;
        batsman Ba[15];
        bowler Bo[10];
        allrounder Al[8];
        cout<<"There are 15 available batsman 10 bowlers 8 all-rounders\n";
        ifstream file1;
        file1.open("batsman_list.txt",ios::in);
        char arrbat[15][16][20];
        int x=0,y=0,z=0;
        char ch1;
        while(!file1.eof())
        {
                file1>>ch1;
                if(ch1!=',')
                {
                        arrbat[x][y][z]=ch1;
                        z++;
                }
                else if(ch1==',')
                {
                        arrbat[x][y][z]='\0';
                        z=0;
                        y++;
                }
                else if(y==16)
                {
                        arrbat[x][y][z]='\0';
                        x++;
                        y=0;
                        z=0;
                }
        }
        file1.close();
        for(int j=0;j<15;j++)
        {
                int k=0;
                strcpy(nam,arrbat[j][k]);k++;
                match=myatoi((arrbat[j][k]));k++;
                pd=myatoi(arrbat[j][k]);k++;
                run=myatoi(arrbat[j][k]);k++;
                bat_avg=myatof(arrbat[j][k]);k++;
                bat_str=myatof(arrbat[j][k]);k++;
                _50=myatoi(arrbat[j][k]);k++;
                _100=myatoi(arrbat[j][k]);k++;
                Best=myatoi(arrbat[j][k]);k++;
                strcpy(pos,arrbat[j][k]);k++;
                strcpy(typ,arrbat[j][k]);k++;
                strcpy(bah,arrbat[j][k]);k++;
                strcpy(boh,arrbat[j][k]);k++;
                strcpy(bow_typ,arrbat[j][k]);k++;
                strcpy(coun,arrbat[j][k]);k++;
                base=myatoi(arrbat[j][k]);
                Ba[j].retrieveData(nam,match,pd,run,bat_avg,bat_str,_50,_100,Best,pos,typ,bow_typ,bah,boh,coun,base);
        }
        ifstream file2;
        file2.open("bowler_list.txt",ios::in);
        char arrbow[10][18][20];
        x=0,y=0,z=0;
        char ch2;
        while(!file2.eof())
        {
                file2>>ch2;
                if(ch2!=',')
                {
                        arrbow[x][y][z]=ch2;
                        z++;
                }
                else if(ch2==',')
                {
                        arrbow[x][y][z]='\0';
                        z=0;
                        y++;
                }
                else if(y==18)
                {
                        arrbow[x][y][z]='\0';
                        x++;
                        y=0;
                        z=0;
                }
        }
        file2.close();
        for(int j=0;j<10;j++)
        {
                int k=0;
                strcpy(nam,arrbow[j][k]);k++;
                match=myatoi((arrbow[j][k]));k++;
                pd=myatoi(arrbow[j][k]);k++;
                wicket=myatoi(arrbow[j][k]);k++;
                bowl_avg=myatof(arrbow[j][k]);k++;
                bowl_str=myatof(arrbow[j][k]);k++;
                eco=myatof(arrbow[j][k]);k++;
                _4w=myatoi(arrbow[j][k]);k++;
                _5w=myatoi(arrbow[j][k]);k++;
                best_run=myatoi(arrbow[j][k]);k++;
                best_wic=myatoi(arrbow[j][k]);k++;
                strcpy(pos,arrbow[j][k]);k++;
                strcpy(typ,arrbow[j][k]);k++;
                strcpy(bah,arrbow[j][k]);k++;
                strcpy(boh,arrbow[j][k]);k++;
                strcpy(bow_typ,arrbow[j][k]);k++;
                strcpy(coun,arrbow[j][k]);k++;
                base=myatoi(arrbow[j][k]);
                Bo[j].retrieveData(nam,match,pd,wicket,bowl_avg,bowl_str,eco,_4w,_5w,best_run,best_wic,pos,typ,bow_typ,bah,boh,coun,base);
        }
        char arr[8][24][20];
        x=0;y=0;z=0;
        fstream file3;
        file3.open("all-rounder_list.txt",ios::in);
        if(!file3)
        {
                cout<<"Error in creating file.."<<endl;
                //return 0;
        }
        char ch;
        while(!file3.eof())
        {
                file3>>ch;
                if(ch!=',')
                {
                        arr[x][y][z]=ch;
                        z++;
                }
                else if(ch==',')
                {
                        arr[x][y][z]='\0';
                        z=0;
                        y++;
                }
                if(y==24)
                {
                        x++;
                        y=0;
                        z=0;
                }
        }
        file3.close();
        for(int j=0;j<8;j++)
        {
                        int k=0;
                        strcpy(nam,arr[j][k]);k++;
                        match=myatoi((arr[j][k]));k++;
                        pd=myatoi(arr[j][k]);k++;
                        run=myatoi(arr[j][k]);k++;
                        bat_avg=myatof(arr[j][k]);k++;
                        bat_str=myatof(arr[j][k]);k++;
                        _50=myatoi(arr[j][k]);k++;
                        _100=myatoi(arr[j][k]);k++;
                        Best=myatoi(arr[j][k]);k++;
                        wicket=myatoi(arr[j][k]);k++;
                        bowl_avg=myatof(arr[j][k]);k++;
                        bowl_str=myatof(arr[j][k]);k++;
                        eco=myatof(arr[j][k]);k++;
                        _4w=myatoi(arr[j][k]);k++;
                        _5w=myatoi(arr[j][k]);k++;
                        best_run=myatoi(arr[j][k]);k++;
                        best_wic=myatoi(arr[j][k]);k++;
                        strcpy(coun,arr[j][k]);k++;
                        strcpy(typ,arr[j][k]);k++;
                        strcpy(bow_typ,arr[j][k]);k++;
                        strcpy(boh,arr[j][k]);k++;
                        strcpy(bah,arr[j][k]);k++;
                        strcpy(pos,arr[j][k]);k++;
                        base=myatoi(arr[j][k]);
                        Al[j].retrieveData(nam,match,pd,run,bat_avg,bat_str,_50,_100,Best,wicket,bowl_avg,bowl_str,eco,_4w,_5w,best_run,best_wic,coun,typ,bow_typ,boh,bah,pos,base);
        }
        cout<<setw(4)<<"ID"<<setw(20)<<"NAME"<<setw(4)<<"MAT"<<setw(8)<<"RUNS"<<setw(8)<<"BAT AVG"<<setw(8)<<"BAT STR"<<setw(6)<<"50s"<<setw(6)<<"100s"<<setw(6)<<"BEST"<<setw(15)<<"POSITION"<<setw(15)<<"TYPE"<<setw(15)<<"BOWL TYPE"<<setw(15)<<"HAND"<<setw(15)<<"HAND"<<setw(15)<<"COUNTRY"<<setw(15)<<"PRICE"<<"\n";
        for(int i=0;i<15;i++)
        {
                Ba[i].printData();
        }
        cout<<"\n";
        cout<<setw(4)<<"ID"<<setw(20)<<"NAME"<<setw(4)<<"MAT"<<setw(6)<<"WKT"<<setw(8)<<"BOWLAVG"<<setw(8)<<"BOWLSTR"<<setw(8)<<"ECONOMY"<<setw(4)<<"4ws"<<setw(4)<<"5ws"<<setw(8)<<"BEST"<<setw(15)<<"POSITION"<<setw(15)<<"TYPE"<<setw(15)<<"BOWL TYPE"<<setw(15)<<"HAND"<<setw(15)<<"HAND"<<setw(15)<<"COUNTRY"<<setw(15)<<"PRICE"<<"\n";
        for(int i=0;i<10;i++)
        {
                Bo[i].printData();
        }
        cout<<"\n";
        cout<<setw(4)<<"ID"<<setw(20)<<"NAME"<<setw(4)<<"MAT"<<setw(6)<<"RUNS"<<setw(8)<<"BAT AVG"<<setw(8)<<"BAT STR"<<setw(6)<<"50s"<<setw(6)<<"100s"<<setw(6)<<"BEST"<<setw(6)<<"WKT"<<setw(8)<<"BOWLAVG"<<setw(8)<<"BOWLSTR"<<setw(8)<<"ECONOMY"<<setw(4)<<"4ws"<<setw(4)<<"5ws"<<setw(8)<<"BEST"<<setw(15)<<"POSITION"<<setw(15)<<"TYPE"<<setw(10)<<"BOWL TYPE"<<setw(8)<<"HAND"<<setw(8)<<"HAND"<<setw(15)<<"COUNTRY"<<setw(10)<<"PRICE"<<"\n";
        for(int i=0;i<8;i++)
        {
                Al[i].printData();
        }
        char chfilter;
        do
        {
                int opinion,yes_no;
                cout<<"Enter the list of players you want filter out and see \n";
                cout<<"(1).Batsman (2).Bowler (3).All-rounder \n";
                cin>>opinion;
                if(opinion==1||opinion==3)
                {
                        match=0;run=0;bat_avg=0;bat_str=0;
                        cout<<"Applying filter \n";
                        cout<<"For matches 1.yes ";cin>>yes_no;
                        if(yes_no==1)
                        {
                                cout<<"Enter condition ";
                                cin>>match;
                        }
                        cout<<"For runs 1.yes ";cin>>yes_no;
                        if(yes_no==1)
                        {
                                cout<<"Enter condition ";
                                cin>>run;
                        }
                        cout<<"For batting average 1.yes ";cin>>yes_no;
                        if(yes_no==1)
                        {
                                cout<<"Enter condition ";
                                cin>>bat_avg;
                        }
                        cout<<"For batting strike rate 1.yes ";cin>>yes_no;
                        if(yes_no==1)
                        {
                                cout<<"Enter condition ";
                                cin>>bat_str;
                        }
                }
                if(opinion==2||opinion==3)
                {
                        wicket=0;bowl_avg=0;bowl_str=0;eco=0;
                        cout<<"For wickets 1.yes ";cin>>yes_no;
                        if(yes_no==1)
                        {
                                cout<<"Enter condition ";
                                cin>>wicket;
                        }
                        cout<<"For bowling average 1.yes ";cin>>yes_no;
                        if(yes_no==1)
                        {
                                cout<<"Enter condition ";
                                cin>>bowl_avg;
                        }
                        cout<<"For bowling strike rate 1.yes ";cin>>yes_no;
                        if(yes_no==1)
                        {
                                cout<<"Enter condition ";
                                cin>>bowl_str;
                        }
                        cout<<"For economy 1.yes ";cin>>yes_no;
                        if(yes_no==1)
                        {
                                cout<<"Enter condition ";
                                cin>>eco;
                        }
                }
                if(opinion==1)
                {
                        for(int i=0;i<15;i++)
                        {
                                Ba[i].filterData(match,run,bat_avg,bat_str);
                        }
                }
                if(opinion==2)
                {
                        for(int i=0;i<10;i++)
                        {
                                Bo[i].filterData(wicket,bowl_avg,bowl_str,eco);
                        }
                }
                if(opinion==3)
                {
                        for(int i=0;i<8;i++)
                        {
                                Al[i].filterData(match,run,bat_avg,bat_str,wicket,bowl_avg,bowl_str,eco);
                        }
                }
                cout<<"There may be chances that no players satisfy all your filters press 'y' to apply filter again \n\n";
                cin>>chfilter;
        }while(chfilter=='y');
        cout<<"\n\nHope you have selected your players after filtering \n\n";
        sold_index=0;
        char chbuy,ch_continue;
        int buy_id;
        int total;
        do
        {
                int random,bid,random_team;
                total=0;
                cout<<"Enter the player id you want to buy ";
                cin>>buy_id;
                if(buy_id>=1&&buy_id<=15)
                {
                        int flag2=0;
                        bid=1000000;
                        random=rand()%5;
                        random_team=rand()%8;
                        //cout<<random<<"  "<<random_team<<"\n";
                        if(check(buy_id)==1)
                        {
                                sold[sold_index]=buy_id;
                                sold_index++;
                                for(int v=0;v<random;v++)
                                {
                                        while(random_team==choice-1)
                                        {
                                                random_team=rand()%8;
                                        }
                                        cout<<teams[random_team]<<" bids player "<<buy_id<<" for "<<bid<<"\n";
                                        cout<<"Wanna Continue ";
                                        cin>>ch_continue;
                                        bid+=1000000;
                                        if(ch_continue!='y')
                                        {
                                                flag2=1;
                                                break;
                                        }
                                }
                                if(flag2!=1)
                                {
                                        if(yourteam.no_of_players<25)
                                        {
                                                if(yourteam.purse-total>0)
                                                {
                                                        if(yourteam.no_of_foreign_players<8||Ba[buy_id-1].foreign_player()==-1)
                                                        {
                                                                cout<<"Congrats you have bought player no "<<buy_id<<"\n\n";
                                                                total=Ba[buy_id-1].base()+bid;
                                                                cout<<"base price + bid amount is "<<total<<"\n\n";
                                                                yourteam.purse-=total;
                                                                yourteam.no_of_batsmans+=1;
                                                                yourteam.no_of_players+=1;
                                                                if(Ba[buy_id-1].foreign_player()==1)
                                                                {
                                                                        yourteam.no_of_foreign_players+=1;
                                                                }
                                                        }
                                                        else
                                                        {
                                                                cout<<"Sorry Foreign slot full\n\n ";
                                                        }
                                                }
                                                else
                                                {
                                                        cout<<"Sorry not enough balance\n\n";
                                                }
                                        }
                                        else
                                        {
                                                cout<<"Your slots is full \n\n";
                                        }
                                        yourteam.display();
                                }
                        }
                        else
                        {
                                cout<<"Sorry Player bought already \n\n";
                        }
                }
                else if(buy_id>=16&&buy_id<=25)
                {
                        int flag2=0;
                        bid=1000000;
                        random=rand()%5;
                        random_team=rand()%8;
                        //cout<<random<<"  "<<random_team<<"\n";
                        if(check(buy_id)==1)
                        {
                                sold[sold_index]=buy_id;
                                sold_index++;
                                for(int v=0;v<random;v++)
                                {
                                        while(random_team==choice-1)
                                        {
                                                random_team=rand()%8;
                                        }
                                        cout<<teams[random_team]<<" bids player "<<buy_id<<" for "<<bid<<"\n\n";
                                        cout<<"Wanna Continue ";
                                        cin>>ch_continue;
                                        bid+=1000000;
                                        if(ch_continue!='y')
                                        {
                                                flag2=1;
                                                break;
                                        }
                                }
                                if(flag2!=1)
                                {
                                        if(yourteam.no_of_players<25)
                                        {
                                                if(yourteam.purse-total>0)
                                                {
                                                        if(yourteam.no_of_foreign_players<8||Bo[buy_id-16].foreign_player()==-1)
                                                        {
                                                                cout<<"Congrats you have bought player no "<<buy_id<<"\n\n";
                                                                total=Bo[buy_id-16].base()+bid;
                                                                cout<<"base price + bid amount is "<<total<<"\n\n";
                                                                yourteam.purse-=total;
                                                                yourteam.no_of_bowlers+=1;
                                                                yourteam.no_of_players+=1;
                                                                if(Bo[buy_id-16].foreign_player()==1)
                                                                {
                                                                        yourteam.no_of_foreign_players+=1;
                                                                }
                                                        }
                                                        else
                                                        {
                                                                cout<<"Sorry foreign slot full \n\n";
                                                        }
                                                }
                                                else
                                                {
                                                        cout<<"Sorry not enough balance \n\n";
                                                }
                                        }
                                        else
                                        {
                                                cout<<"Your slots are full \n\n";
                                        }
                                        yourteam.display();
                                }
                        }
                        else
                        {
                                cout<<"Sorry Player bought already \n";
                        }
                }
                else if(buy_id>=26&&buy_id<=33)
                {
                        int flag2=0;
                        bid=1000000;
                        random=rand()%5;
                        random_team=rand()%8;
                        //cout<<random<<"  "<<random_team<<"\n";
                        if(check(buy_id)==1)
                        {
                                sold[sold_index]=buy_id;
                                sold_index++;
                                for(int v=0;v<random;v++)
                                {
                                        while(random_team==choice-1)
                                        {
                                                random_team=rand()%8;
                                        }
                                        cout<<teams[random_team]<<" bids player "<<buy_id<<" for "<<bid<<"\n\n";
                                        cout<<"Wanna Continue ";
                                        cin>>ch_continue;
                                        bid+=1000000;
                                        if(ch_continue!='y')
                                        {
                                                flag2=1;
                                                break;
                                        }
                                }
                                if(flag2!=1)
                                {
                                        if(yourteam.no_of_players<25)
                                        {
                                                if(yourteam.purse-total>0)
                                                {
                                                        if(yourteam.no_of_foreign_players<8||Al[buy_id-26].foreign_player()==-1)
                                                        {
                                                                cout<<"Congrats you have bought player no "<<buy_id<<"\n\n";
                                                                total=Al[buy_id-26].base()+bid;
                                                                cout<<"base price + bid amount is "<<total<<"\n\n";
                                                                yourteam.purse-=total;
                                                                yourteam.no_of_All_rounders+=1;
                                                                yourteam.no_of_players+=1;
                                                                if(Al[buy_id-26].foreign_player()==1)
                                                                {
                                                                        yourteam.no_of_foreign_players+=1;
                                                                }
                                                        }
                                                        else
                                                        {
                                                                cout<<"Sorry foreign slot full \n\n";

                                                        }
                                                }
                                                else
                                                {
                                                        cout<<"Sorry not enough balance \n\n";
                                                }
                                        }
                                        else
                                        {
                                                cout<<"Your slots is full \n\n";
                                        }
                                        yourteam.display();
                                }
                        }
                        else
                        {
                                cout<<"Sorry Player bought already \n";
                        }
                }
                else
                {
                        cout<<"Invalid Choice \n";
                        chbuy='y';
                }
                cout<<"Continue buying players \n";
                cin>>chbuy;
        }while(chbuy=='y');
}
