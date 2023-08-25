#include <iostream>

using namespace std;

int main()
{
    int array[5] = { 1, 2, 3, 4, 5 };
    
    // Old Method
    /*for (int i = 0; i < 5; i++)
    {
        cout << array[i] << endl;
    }*/

    // New Method (Only Works for Array)
    for (auto i : array)
    {
        cout << i << endl;
    }
}