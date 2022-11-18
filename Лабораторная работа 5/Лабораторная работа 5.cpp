#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
    //0
    int i, j;
    const int n = 5, m = 5;
    int NCh = 0; //Nechetnie elementi
    int OtrNCh = 0; //Otricatelnie nechetnie elementi
    long sum = 0; //summa moduley OTRNCH
    int arr[n][m];
    int** a = new int* [n];
    for (i = 0; i < n; i++) {
        a[i] = new int[m];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 21 - 10;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << " " << arr [i][j]; //Vivod Massiva
        }
        cout << endl;
    }
    //Найти нечётные элементы
    //Найти отрицательные нечётные элементы
    //Найти модуль отрицательных нечётных элементов
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            if (arr [i][j] % 2 != 0 && arr[i][j] % 2 >= 0){
                OtrNCh += 1;
                sum = sum + fabs(OtrNCh);
            }
        }
    }
    cout << sum;
    //1
    //2
}

