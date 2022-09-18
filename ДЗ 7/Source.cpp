#include<iostream>
using namespace std;

inline double res(double num1, double num2, double num3) {
    return (num1 + num2 + num3) / 3;
}

int max(int n1, int n2, int n3) {
    cout << "Тип данных - int\n";
    int max = n1;
    if (n2 > max)
        max = n2;
    if (n3 > max)
        max = n3;
    return max;
}
short max(short n1, short n2, short n3) {
    cout << "Тип данных - short\n";
    short max = n1;
    if (n2 > max)
        max = n2;
    if (n3 > max)
        max = n3;
    return max;
}
double max(double n1, double n2, double n3) {
    cout << "Тип данных - double\n";
    double max = n1;
    if (n2 > max)
        max = n2;
    if (n3 > max)
        max = n3;
    return max;
}

template <typename T>
T min_mas(T array[], const int size)
{
    T min = array[0];
    for (int i = 0; i < size; i++)
        if (array[i] < min)
            min = array[i];
    return min;
}


int mirror_numbers(int n, int newn)
{
    if (n == 0)
        return newn;
    newn = (newn * 10) + (n % 10);
    return mirror_numbers(n / 10, newn);
}

int main()
{
    setlocale(LC_ALL, "Russian");

  
    cout << "Задача 1. \n";
    double n1, n2, n3;
    cout << "Введите три числа: \n";
    cin >> n1 >> n2 >> n3;
    cout << "Среднее арифметическое введенных чисел = " << res(n1, n2, n3) << "\n\n";


    cout << "Задача 2. \n";
    
    cout << "Максимальный элемент = " << max (10.566, 2.86, 3.76) << "\n";
    cout << "Максимальный элемент = " << max(489632, 45240031, 15468506) << "\n";
    cout << "Максимальный элемент = " << max(12, -6, 236) << "\n\n";


    cout << "Задача 3. \n";

    const int size = 5;
    int arr[size];
    cout << "Введите количество чисел, равное " << size << ": \n";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << "Минимальный элемент массива = " << min_mas(arr, size) << "\n\n";


    cout << "Задача 4. \n";

    int num, num1 = 0;
    cout << "Введите число: \n";
    cin >> num;
    cout << "Число в отраженном виде = " << mirror_numbers(num, num1) << "\n";

    return 0;
}