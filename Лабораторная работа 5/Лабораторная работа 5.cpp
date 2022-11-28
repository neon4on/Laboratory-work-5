#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
    //0
    int i, j, OtrNCh = 0, m,n;
    int* f = new int [500];
    int* e = new int [500];
    int* ee = new int[500];
    setlocale(LC_ALL, "Russian");
    cout << " Введите значение высоты матрицы: "; cin >> n;
    cout << " Введите значение длины матрицы: "; cin >> m;

    int** a = new int*[n]; //Создание двумерного динамического массива
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
    }

    int** ar = new int* [n]; //Создание 2-го двумерного динамического массива
    for (int i = 0; i < n; i++) {
        ar[i] = new int[m];
    }

    long* sum = new long[m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = rand() % 21 - 10; //Рандомит массив
        }
    }

    cout << " ARRAY:" << endl << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(5) << a[i][j]; //Вывод массива
        }
        cout << endl;
    }
    //Найти модуль отрицательных нечётных элементов в столбце
    for (int j = 0; j < n; j++) {
        sum[j] = 0;
        for (int i = 0; i < m; i++) {
            if ((a[i][j] % 2 != 0) && (a[i][j] < 0)) {    
                sum[j] += a[i][j];
                ar[i][j] = a[i][j];
            }
        }
        cout << endl;
        cout <<" Summa " << j << " : " << sum[j];
        f[j] = sum[j];
    }

    cout << endl << endl;
    cout << " Необходимые Элементы для характеристики: ";

    for (int j = 0; j < n; j++) {
        cout << f[j] << " ";
    }

    cout << endl << endl;

    cout << " Отсортированные Элементы для характеристики: ";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int j = 0; j < n-1; j++) {
                if (f[j] > f[j + 1]) {
                    swap(a[i][j], a[i][j + 1]); //Сортирую Массив суммы
                }
                else if (f[j] == f[j + 1]) {
                    swap(a[i][j], a[i][j + 1]);
                }
            }
        }
    }
    for (int j = 0; j < n - 1; j++) {
        for (int j = 0; j < n - 1; j++) {
            if (f[j] > f[j + 1]) {
                swap(f[j], f[j + 1]); //Сортирую элементы суммы
            }
        }
    }
    for (int j = 0; j < n; j++) {
        cout << " " << f[j]; //Вывожу отсортированные элементы суммы
    }
    cout << endl << endl;
    cout << " Мне нужно чтобы вывело 2, 5, 1, 3, 4 стобец" << endl;
    cout << endl <<" Отсортированная матрица: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            /*if (f[j] < sum[j]) {
                cout << setw(5) << a[i][j];
            }
            else if (f[j] = sum[j]) {
                cout << setw(5) << a[i][j];
            }
            else {
                cout << setw(5) << a[i][j];
            }*/
            cout << setw(5) << a[i][j];
        }
        cout << endl;
    }
    cout << endl << endl;
    delete[] a;
}