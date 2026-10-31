//this code is use to print the rec and square both as per the input no of stars= no of rows
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
