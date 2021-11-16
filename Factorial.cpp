#include<iostream>
using namespace std;

int main()
{
long long number,i,result=1;
cout<<"Enter the number: ";
cin>>number;

for(i=number;i>=1;i--)
{
    result= result*i;
}
cout<<result<<endl;
    return 0;
}