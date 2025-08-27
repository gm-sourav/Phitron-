#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int fre[6] = {0};
    for (int  i = 0; i < n; i++)
    {
        int val = arr[i];
        fre[val]++;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << fre[i] << endl;
    }
    
    
}