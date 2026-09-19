#include <iostream>
using namespace std;
int main()
{
    // cout<<"*****"<<endl;
    // cout<<"*****"<<endl;
    // cout<<"*****"<<endl;
    int n, m;
    cout << "No of rows: ";
    cin >> n;
    cout << "No of cols: ";
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < m; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
}