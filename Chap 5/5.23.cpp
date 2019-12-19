//Program 5.23
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input the desired height \n";
    cin >>n;

    for (int r = -1, d1 = 0, d2 = 0; r < n + 1; r++)
    {
        cout << "#";
        if (r == -1 || r == n)
        {
            for (int i = 0; i < n; i++)
            {
                cout << "#";
            }
        }
        else
        {
            for (int c = 0; c < n; c++)
            {

                d1 = r;
                d2 = n - r - 1;
                if (d1 <= d2)
                {
                    (c >= d1 && c <= d2) ? cout << "*" : cout << " ";
                }
                else
                {
                    (c >= d2 && c <= d1) ? cout << "*" : cout << " ";
                }
            }
        }
        cout << "#";
        cout << "\n";
    }
    return 0;
}
