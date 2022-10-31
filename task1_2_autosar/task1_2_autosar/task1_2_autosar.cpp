// task1_2_autosar.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <bitset>
#include <cstring>
#include <string>
using namespace std;

#define SET_BIT(x, p) x | (1 << p)   // set (set to 1) proper bit into the "x" byte by "p" position
#define CLR_BIT(x, p) x & ~(1 << p) // clear (set to 0) proper bit into the "x" byte by "p" position
#define TGL_BIT(x, p) x ^ (1 << p) // flip/toggle proper bit into the "x" byte by "p" position
#define CHK_BIT(x, p) x & (1 << p) ? "Set" : "Not set" // check proper bit into the "x" byte by "p" position

void Int2BitStr(int x, char *str, int size)
{
    string bin_form("");
    int mask = 1;
    for (int i = 0; i < size; i++)
    {
        if ((mask & x) >= 1)
            bin_form = "1" + bin_form;
        else
            bin_form = "0" + bin_form;
        mask <<= 1;
    }
    str = _strdup(bin_form.c_str());
    printf("0b%s\n",str);
}


void main()
{
    int x1 = 11, p1 = 2, x2=13, p2=0, x3=10, p3=1, size1=5, size2=7, size3= 10;
    char *str1{}, *str2{}, *str3{}, *str4{};
    printf("setting proper bit into the %d byte by %d position: %d = ", x1, p1, SET_BIT(x1, p1));
    Int2BitStr(SET_BIT(x1, p1), str1, size1);
    printf("clearing proper bit into the %d byte by %d position: %d = ", x2, p2, CLR_BIT(x2, p2));
    Int2BitStr(CLR_BIT(x2, p2), str2, size2);
    printf("fliping proper bit into the %d byte by %d position: %d = ", x3, p3, TGL_BIT(x3, p3));
    Int2BitStr(TGL_BIT(x3, p3), str3, size3);
    printf("And vice-versa: %d = ", TGL_BIT(TGL_BIT(x3, p3), p3));
    Int2BitStr(TGL_BIT(TGL_BIT(x3, p3), p3), str4, size3);
    printf("checking proper bit into the %d byte by %d position: %s\n", x1, p1, CHK_BIT(x1, p1));
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
