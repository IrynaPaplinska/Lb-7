#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Введіть розмір масиву: ";
    cin >> size;

    // Виділення пам'яті під динамічний одновимірний масив
    int* arr = new int[size];

    // Введення елементів масиву
    for (int i = 0; i < size; i++) {
        cout << "Введіть елемент " << i << ": ";
        cin >> arr[i];
    }

    // Збільшення кожного елемента вдвічі
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }

    // Сортування за спаданням методом обміну (бульбашкою)
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Виведення відсортованого масиву
    cout << "Масив після подвоєння та сортування за спаданням:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Звільнення виділеної динамічної пам'яті
    delete[] arr;

    return 0;
}