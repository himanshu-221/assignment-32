/*Define a base class Animals having member function sound() . Define another derived 
class from Animals class named Dogs. You need to override the sound function of the 
base class in the derived class.
*/
#include<iostream>
using namespace std;
class Animals
{
    public:
        void Sound()
        {
            cout<<"Function Sound from Base class\n";
        }
};

class Dogs : public Animals
{
    public:
        void Sound()
        {
            cout<<"Function Sound from Derived class\n";
            //Overriden function using derived class
            //Animals::Sound();
        }
};
int main()
{
    Dogs d1;
    Animals *A = &d1;
    d1.Sound();
    //Base class overrriden function using derived class object
    d1.Animals::Sound();
    //Access Base class overriden function using pointer
    A->Sound();
    return 0;
}