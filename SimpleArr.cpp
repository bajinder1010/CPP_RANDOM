#include <iostream>
using namespace std;


int main()
{
int i,j;
char name [3][5] = {
                    {'B','A','J'},
                    {'S','I','N','G','H'},
                    {'A','H','I'}
                    };
//cout << name[0][0]<< name[0][1]<<name[0][2]<<" "<<name[1][0]<<name[1][1]<<name[1][2]<<name[1][3]<<name[1][4]<<" "<<name[2][0]<<name[2][1]<<name[2][2]<<endl;
for(i=0 ; i<3;i++)
{
    for(j=0;j<5;j++)
    {
        cout<<name[i][j];
    }

    cout<<" ";
    
}
cout<<endl;
cout<<sizeof(name)<<endl;
}