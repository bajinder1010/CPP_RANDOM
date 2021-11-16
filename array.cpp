#include <iostream>
#include <array>
using namespace std;

array<int, 5> fillarr(int arr[])
{
    array<int, 5> arr2;
    for (int i = 0; i < 5; ++i)
    {
        arr2[i] = arr[i] * 2;
    }
    return arr2;
}

int main()
{
    int my_array[5] = {1, 2, 3, 4, 5};
    array<int, 5> c = fillarr(my_array);
    ;
    return 0;
}
