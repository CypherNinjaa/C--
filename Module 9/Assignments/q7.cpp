// Q1. Count the number of triplets whose sum is equal to the given value x.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int x = 8;
    int count = 0;

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            for (int k = j + 1; k < v.size(); k++)
            {
                if (v.at(i) + v.at(j) + v.at(k) == x)
                {
                    count++;
                }
            }
        }
    }
    cout << "Number of triplets: " << count << endl;
    return 0;
}