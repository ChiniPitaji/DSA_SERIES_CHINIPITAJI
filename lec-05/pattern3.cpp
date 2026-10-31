
// * * * * *
// *       *
// * * * * *

#include <iostream>
using namespace std;

int main()
{
    int rowCount,colCount;
    cin>>rowCount;
    cin>>colCount;
    for (int row = 0; row < rowCount; row++)
    {
        if (row == 0 || row == rowCount-1)
        {
            for (int col = 0; col < colCount; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            // remaining middle rows
            // first star
            cout << "* ";
            // spaces
            for (int i = 0; i < colCount-2; i++)
            {
                cout << "  ";
            }
            // last star
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

//colCount-2 bcoz=>if 8 col 1st and last col pe star then 8-2=6 spaces between those.
// no of col - 2 = spaces
