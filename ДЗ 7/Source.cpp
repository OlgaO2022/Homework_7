#include<iostream>
using namespace std;

inline double res(double num1, double num2, double num3) {
    return (num1 + num2 + num3) / 3;
}

int max(int n1, int n2, int n3) {
    cout << "��� ������ - int\n";
    int max = n1;
    if (n2 > max)
        max = n2;
    if (n3 > max)
        max = n3;
    return max;
}
short max(short n1, short n2, short n3) {
    cout << "��� ������ - short\n";
    short max = n1;
    if (n2 > max)
        max = n2;
    if (n3 > max)
        max = n3;
    return max;
}
double max(double n1, double n2, double n3) {
    cout << "��� ������ - double\n";
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

  
    cout << "������ 1. \n";
    double n1, n2, n3;
    cout << "������� ��� �����: \n";
    cin >> n1 >> n2 >> n3;
    cout << "������� �������������� ��������� ����� = " << res(n1, n2, n3) << "\n\n";


    cout << "������ 2. \n";
    
    cout << "������������ ������� = " << max (10.566, 2.86, 3.76) << "\n";
    cout << "������������ ������� = " << max(489632, 45240031, 15468506) << "\n";
    cout << "������������ ������� = " << max(12, -6, 236) << "\n\n";


    cout << "������ 3. \n";

    const int size = 5;
    int arr[size];
    cout << "������� ���������� �����, ������ " << size << ": \n";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << "����������� ������� ������� = " << min_mas(arr, size) << "\n\n";


    cout << "������ 4. \n";

    int num, num1 = 0;
    cout << "������� �����: \n";
    cin >> num;
    cout << "����� � ���������� ���� = " << mirror_numbers(num, num1) << "\n";

    return 0;
}