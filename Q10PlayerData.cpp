#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;
class Player
{
    int player_no,matches,*goals;
    char *p_name;
    public:
        Player(int pno, const char*name, int m) : player_no(pno), matches(m)
        {
            int len = strlen(name);
            p_name = new char[len+1];
            strcpy(p_name,name);
            goals = new int[m];
            memset(goals,0,sizeof(int)*m);
        }
        void setGoals(int mno,int goal)
        {
            if(mno >=0 && mno <= matches)
            {
                goals[mno] = goal;
            }
            else{
                cout<<"Invalid match no.\n";
            }
        }
        void Display()
        {
            cout<<"Player name = "<<p_name<<endl;
            cout<<"Player number = "<<player_no<<endl;
            cout<<"Number of matches = "<<matches<<endl;
            cout<<"Goals in each match:- "<<endl;
            for(int i = 1;i<=matches;i++)
            {
                cout<<"Match "<<i<<": "<<goals[i]<<" goals "<<endl;
            }
        }
        ~Player()
        {
            delete[] p_name;
            delete[] goals;
        }
};
int main()
{
    Player p1(123,"Himanshu",5);
    p1.setGoals(1,3);
    p1.setGoals(2,2);
    p1.Display();

    return 0;
}