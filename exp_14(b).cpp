// Name --> Aditya Agarwal
// PRN --> 23070123162

// Code which demonstrates Multiple Inhertance 
// Multiple Inheritance -> A derived class inherits from more than one base class.
# include <iostream>
# include <string>
using namespace std;

//multiple inheritance
class mammal // child class 1
{
    public:
    string mammal = "Kingdom Mammalia";
    void exp()
    {
        cout<<"Exceptions: ";
    }
};
class aquatic // child class 2
{
    public:
    string aqua = "Species living in the water ";

};

class walrus:public aquatic,public mammal // joining both child class 1 and 2

// Derived class has access to meathods from both aquatic and mammal
{
    public:
    string wallie = "Walrus are mammals which are aquatic ";

};
int main()
{
    walrus b1;
    cout<<b1.mammal<<endl;
    b1.exp();
    cout<<b1.wallie;
}
