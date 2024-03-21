#include<iostream>
using namespace std;

int main()
{
    int rows = 4, column = 6;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < column; j++)
        {
            if((i+j)%2 == 0)
            {
                cout << "1";
            }else
            {
                cout << "2";
            }
        }
        cout << endl;
    }
}