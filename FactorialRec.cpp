#include<iostream>
using namespace std;

int fact(int n)
{
    int result=1;
    if(n==1 )
    return 1;
    result = n*fact(n-1);
    
    return result;
}


int main()
{

int number,res;
cout<<"Enter number : ";
cin>>number;
res = fact(number);
cout<<res;

return 0;
}

