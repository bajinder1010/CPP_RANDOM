#include<iostream>
using namespace std;
int main()
{
    
    char c = 'a';   
    //cout << (void*) &c<<endl;
    //cout << (int)c<<endl;
    int resascii = c= c^32;
    int reshex = c^=0x20;

    cout << (char)resascii<<endl;
    cout << (char)reshex<<endl;
    cout << (char)32<<endl; //32 is space in ascii
    
    return 0;
}