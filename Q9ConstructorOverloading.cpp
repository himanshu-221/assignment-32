#include<iostream>
using namespace std;
class Area
{
    float radius,lenght,bredth,hight,area;
    public:
        Area()
        {}
        Area(float b,float h)
        {
            //cout<<"hi";
            area = 0.5 * b * h;
        }
        Area(double l,double h)
        {
           // cout<<"hii";
            area = l*h;
        }
        Area(float r)
        {
            area = 3.14 * r*r;
        }
        void display()
        {
            cout<<area;
        }
};

int main()
{
    int n;
    cout<<"Enter No. for calculate area\n";
    cout<<"1. Area of triangle\n";
    cout<<"2. Area of rectangle\n";
    cout<<"3. Area of circle\n";
    cin>>n;
    switch(n)
    {
        case 1 : 
        {
            float b,h;
            cout<<"Enter base and hight of triangle\n";
            cin>>b>>h;
            Area a1(b,h);
            cout<<"Area of triangle is ";
            a1.display();
            break;
        }
        case 2:
        {
            float l,b;
            cout<<"Enter lenght and bredth of rwctangle\n";
            cin>>l>>b;
            Area a1(l,b);
            cout<<"Area of ractangle is ";
            a1.display();
            break;
        }
        case 3:
        {
            float r;
            cout<<"Enter radius of circle\n";
            cin>>r;
            Area a1(r);
            cout<<"Area of circle is ";
            a1.display();
        }
    }
    return 0;
}