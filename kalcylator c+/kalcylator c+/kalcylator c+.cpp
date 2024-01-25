#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    
    cout << "1. Сложение\n";
    cout << "2. Вычитание\n";
    cout << "3. Умножение\n";
    cout << "4. Деление\n";
    cout << "5. Возведение в степень\n";
    cout << "6. Квадратный корень из числа\n";
    cout << "7. Нахождение процента от числа\n";
    cout << "8. Выход из программы\n\n";
    
    

    cout << "1. Сложение\n";
    int a, b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    int c = a + b;
    cout << "Сумма чисел = " << c << "\n" << endl;

    cout << "2. Вычитание\n";
    int q, w;
    cout << "Введите первое число: ";
    cin >> q;
    cout << "Введите второе число: ";
    cin >> w;
    int e = q - w;
    cout << "Разница чисел = " << e << "\n" << endl;
    
    cout << "3. Умножение\n";
    int r, t;
    cout << "Введите первое число: ";
    cin >> r;
    cout << "Введите второе число: ";
    cin >> t;
    int y = r * t;
    cout << "Умножение чисел = " << y << "\n" << endl;

    cout << "4. Деление\n";
    int u, i;
    cout << "Введите первое число: ";
    cin >> u;
    cout << "Введите второе число: ";
    cin >> i;
    int o = u / i;
    cout << "Разность чисел = " << o << "\n" << endl;

    cout << "5. Возведение в степень\n";
    int p, s;
    cout << "Введите первое число: ";
    cin >> p;
    cout << "Введите степень: ";
    cin >> s;
    cout << "Число возведенное в степень = " << (pow(p,s)) << "\n" << endl;

    cout << "6. Квадратный корень из числа\n";
    int d;
    cout << "Введите число: ";
    cin >> d;
    cout << "Квадратный корень = " << sqrt(d) << "\n" << endl;

    cout << "7. Нахождение процента от числа\n";
    float f;
    cout << "Введите число: ";
    cin >> f;
    float g = f / 100;
    cout << "Найденный процент = " << g << "\n" << endl;

    cout << "8. Факториал\n";
    int h, k;
    cout << "Введите число: ";
    cin >> h;
    k = 1;
    for (int j = 1; j <= h; j++)
    {
        k = k * j;
    }
    cout << "Факториал числа = " << k << "\n" << endl;

    cout << "9. Выход из программы\n";
    system("pause");

    return 0;
}
