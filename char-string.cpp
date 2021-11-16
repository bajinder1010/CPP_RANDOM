#include <iostream>
using namespace std;

void func(char *c, int num);

int main()
{
   int len;
   std::string mystring;
   std::string d = "JJJ";
   cout << "Enter string: ";
   cin >> mystring;
   cout << endl;
   len = mystring.size();
   func(&mystring[0], len);
   return 0;
}

void func(char *c, int lenofstring)
{
   for (int i = 1; i <= lenofstring; i++)
   {

      //(*c) = 'g';
      //cout<<(char)(*c^32)<<" ";
      cout << (char)(*c ^ 0x20) << " ";
      c++;
   }
}