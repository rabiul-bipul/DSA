#include<iostream>
using namespace std;

int main()
{
    int rows = 3, column = 6;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}