#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int m;
    cin >> m;
    int B[m];
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }

    int C[n+m];
    for (int i = 0; i < n; i++)
    {
        C[i] = A[i];
    }
    for (int i = 0; i < m; i++)
    {
         C[i+n] = B[i];
    }
    
    for (int i = 0; i < n+m; i++)
    {
        cout << C[i] << " ";
    }
    
    


    
}
