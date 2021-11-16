#include <iostream>
using namespace std;

class bob{

   public:bob()
   {
       cout<< "constructor is called automatically"<<endl;
   }

   public:void display()
   {
       cout<<"hello bobby"<<endl;
   }

};

int main(){
    bob obj1,obj2;

    obj1.display();
    obj2.display();
    
    return 0;
}
