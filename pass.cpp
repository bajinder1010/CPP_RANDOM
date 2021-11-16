#include <iostream>
using namespace std;

class Bob
{
    private:
            int x,y;
    public:

    Bob()
    {
       cout<<"I'm in base default constructor"<<endl;
    }
    
    Bob(int b, int c)
    {
       x= b;
       y=c;

       cout<<x<<" in base constructor"<<endl;
       cout<<y<<" in base constructor"<<endl;
    }

    void virtual GetVal()
    {
       cout<<x<<" in Bob"<<endl;
       cout<<y<<" in Bob"<<endl;
    }

    void myFunc(Bob &obj)
    {
        obj.GetVal();
    }
};

class Bani:public Bob
{
    private:
            int x,y;
    public:
    
    Bani(int b, int c)
    {
       x= b;
       y=c;
    }

    void GetVal()
    {
       cout<<x<<" in Bani"<<endl;
       cout<<y<<" in Bani"<<endl;
    }

    
};

class Preeto:public Bob
{
    private:
            int x,y;
    public:
    
    Preeto(int b, int c)
    {
       x= b;
       y=c;
    }

    void GetVal()
    {
       cout<<x<<" in Preeto"<<endl;
       cout<<y<<" in Preeto"<<endl;
    }

    
};


int main ()
{
    Bob *objBob = new Bani(3,6);
    Bob *objBob1 = new Preeto(4,5);
    //objBob.GetVal();
    //Bani objBani(3,6);
    //objBani.GetVal();
    objBob->myFunc(*objBob);
    objBob->myFunc(*objBob1);
    return 0;
}