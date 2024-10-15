// Name --> SAURABH BIHANI
// PRN --> 23070123166

// What is Inheritance ??
// Inheritance in c++ is a fundamental concept in oops that allow one class(child class) to inherit the properties and behavior(meathods) from parent class 
// This promotes code reuse and a hierarchical class structure.

// Code which demonstrate Single level Inheritance

# include <iostream>
# include <string>
using namespace std;

//single inheritance
class uni // Parent Class
{
    public:
    string uni = "Symbiosis";
    void course()
    {
        cout<<"B. Tech ";
    }
};
class branch/*child class*/: public uni 
// by this, the child class gets inherits the properties of the parent class
// and Electronics and telecommunication also gets printed along with B. Tech.
{
    public:
    string branch = " Electronics and Telecommunication ";

};

int main()
{
    branch b1;
    cout<<b1.uni<<endl;
    b1.course();
    cout<<b1.branch;
}
