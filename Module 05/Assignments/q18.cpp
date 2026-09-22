#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the rows: ";
    cin >> n;

    int nsp = 2 * n - 3;

    // upper V
    for (int i = 0; i <= n; i++)
    {
        // initial space
        for (int k = 1; k <= i - 1; k++)
        {
            cout << " ";
        }
    }
    // First star
    cout << "*";


    
    // bottom V
    for (int i = 1; i <= n; i++)
    {
        // Initial spaces
        for (int k = 1; k <= i - 1; k++)
        {
            cout << " ";
        }

        // First star
        cout << "*";

        // Last row
        if (i != n)
        {
            // Middle spaces
            for (int l = 1; l <= nsp; l++)
            {
                cout << " ";
            }

            // Second star
            cout << "*";
        }

        cout << endl;

        nsp -= 2;
    }

    return 0;
}