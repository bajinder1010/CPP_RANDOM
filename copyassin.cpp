#include <iostream>
using namespace std;

class person
{
    string name;
    int age;

    public:
       person(string name, int age )
       {
          cout<<name;
       }
    void SetName(string nam)
	{
		name = nam;
        
	}
	//Sample 04: Print Function
	void PrintName()
	{
		cout << "Int X=" << name << endl;
	}
};



int main()
{
    person a("bajinder", 42);
    a.SetName("Bajinder");
    a.PrintName();
    person b = a;
    b.SetName("ggg");
    b.PrintName();
    a.PrintName();
    return 0;
}