#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// int main()
// {
//     bool flag = 43; // flag = 1,bool只能取0或1
//     cout << flag << endl;
//     cout << true << endl;
//     cout << false << endl;
//     cout << (flag == true) << endl;

//     return 0;
// } 

int main()
{
    unsigned a = 10;
    int b = -100; // -100转为无符号数为（-100）% 4294967296 = 4294967196 
    char c = 'A';
    string d = "AB";
    cout << a + b << endl;
    cout << (long long)pow(2,32) << endl;
    cout << d.size() << endl;

    return 0;
} 