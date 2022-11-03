#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char* argv[])
{
    //0
    int arr[4][2] = { {-1,5},{1,-2},{-5,7},{4, -3} }; //Массив
    int NCh = 0; //Нечётные элементы
    int OtrNCh = 0; //Отрицательные нечётные элементы
    int sum = 0; //Сумма модулей OtrNCh
    cout << "ARRAY(MASSIV): " << endl << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cout << " " << arr[i][j];
        }
        cout << " " << endl;
    }
    cout << endl;
    //Найти нечётные элементы
    //Найти отрицательные нечётные элементы
    //Найти модуль отрицательных нечётных элементов
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            if (arr[i][j] % 2 != 0 && arr[i][j] % 2 >= 0) {
                OtrNCh += 1;
                sum = sum + fabs(OtrNCh);
            }
        }
    }
    cout << "SUM: " << sum << endl;
    //1
    

    //2
}