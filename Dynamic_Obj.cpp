#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    string country;
    int jersey;

    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};
int main()
{
    Cricketer *dhoni = new Cricketer("India", 90);
    Cricketer *koli = new Cricketer("India", 18);
    // koli = dhoni;
    // koli->country = dhoni->country;
    // koli->jersey = dhoni->jersey;
    *koli = *dhoni;
    
    delete dhoni;
    cout << koli->country << " " << koli->jersey << endl;
    

    return 0;
}