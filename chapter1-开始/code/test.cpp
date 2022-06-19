#include <iostream>
#include <stdio.h>

using namespace std;
// int main(){

//     int a = 1;

//     cout << "hello world!" << endl;
//     cout << "hello world!" << endl;
//     return 0;
// }

int main()
{
    int sum = 0, value = 0;
    
    // 将标准输入流定位到input.txt
    freopen("./input.txt", "r", stdin);

    while (cin >> value)
    {
        sum += value;
    }

    // 将标准输出流定位到output.txt
    freopen("./output.txt", "w", stdout);
    cout << "Sum is:" << sum << endl;

    return 0;
}

