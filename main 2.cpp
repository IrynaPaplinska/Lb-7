#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int rows = 3;
    int cols = 4;

    // Створення динамічного двовимірного масиву
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 21 - 10; // випадкові числа від -10 до 10
        }
    }

    // Виведення масиву на екран
    cout << "Двовимірний масив:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    // Обчислення суми квадратів елементів
    long long sumSquares = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sumSquares += static_cast<long long>(arr[i][j]) * arr[i][j];
        }
    }

    cout << "Сума квадратів елементів масиву: " << sumSquares << endl;

    // Звільнення виділеної пам'яті
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}