#include <bits/stdc++.h>
using namespace std;
int main()

{
    string s;
    int count = 0;
    getline(cin, s);
    cout << s << endl;
    stringstream ss(s);
    string word;


    while (ss >> word)
    {
        cout << word << endl;
        count ++;
    }
    cout << count;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;

    return 0;
}