#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout<<"\n";
        for (int j = n - i; j >= 1; j--)
        {
            cout << " ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        for (int l = i-1; l >= 1; l--)
        {
            cout << l;
        }
    }
}