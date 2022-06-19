# 一些知识点
1. GNU

    (1)Linux仅仅是一个操作系统内核，由林纳斯创造出来。

    内核是什么？内核建立了计算机软件与硬件之间通讯的平台，内核提供系统服务，比如文件管理、虚拟内存、设备I/O等。
    由此可见，内核解决的问题是硬件管理，并不包含外围的应用程序，所以Linux内核对于大多数人来说无法正常使用。

    (2)GNU是一个技术组织，发起人是 Richard Stallman，是要建立一个自由软件的王国，对抗Unix的商业帝国。
    GUN的哲学就是：软件是人类共同拥有的知识财富，应该公开地自由交换、修改，不能想Unix那样封闭和商业化太浓。GNU组织开发了大量的外围程序，但是操作系统一直没有什么明显进展。后来，在Richard Stallman精神感召下，林纳斯带着Linux内核加入了GNU组织，补齐了GNU缺少操作系统内核的技术短板，因Linux本身遵循GPL版权许可协议，同时又把GNU的很多软件集成了进去，从而形成了GNU/Linux。GNU/Linux的意思是：外围程序+操作系统内核。

2. main函数的返回类型必须为int，main函数的返回值用来指示状态，0表示成功，非0返回值的含义由系统定义，通常用来指出错误类型
3. Unix系统通常将编译后的可执行文件命名为a.out。
4. C++使用标准库iostream来提供IO机制。iostream包含两个基础类型istream和ostream。一个流就是一个字符序列从IO设备读入内存(cin)或从内存输出到IO设备(cout)。
5. 多行注释以"/*"开始，以"*/"结束，一个注释不能嵌套在另一个注释之内。
6. EOF，end of file。
7. 输入运算符“>>”和输出运算符“<<”，cin >> "hello"的含义是将运算符右侧的“hello”写入输入对象cin并将其返回。
8. 当使用一个istream对象作为判断条件时（比如while(cin >> val)），其效果是检测流的状态，如果流是有效的那么检测成功，如果流遇到文件结束符或者一个无效的输入时，istream对象的状态会变为无效。
9. 文件重定向

    当测试程序时，反复从键盘敲入数据作为程序输入很低效，我们可以使用文件重定向解决，其将标准输入和标准输出与命名文件关联起来。
    ```c++
    #include <iostream>
    #include <stdio.h>

    using namespace std;
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
    ```