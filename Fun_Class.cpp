#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int math;
    int eng;
    Student(string name, int roll,int math,int eng)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->eng = eng;
    }
    void hello()
    {
        cout << "hello from -> " << name << endl;
    }
    int result(){
        cout << "Result Of -> " << name << " = " << math + eng << endl;
    }
 
};
int main()
{
    Student Sourov("Sourov", 23,85,90);
    // cout << Sourov.name << endl;
    Sourov.hello();
    Sourov.result();
    
    Student Badhon("Badhon Khan",11,90,80);
    // cout << Badhon.name << endl;
    Badhon.hello();
    Badhon.result();

return 0;
}
