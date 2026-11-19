<img width="786" height="178" alt="image" src="https://github.com/user-attachments/assets/ca308c81-e181-44ab-a7e4-b04eb1d1bd9b" />
<img width="703" height="44" alt="image" src="https://github.com/user-attachments/assets/6aa952d3-a0e9-4fe6-8f88-443c349203c1" />


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
<img width="1559" height="818" alt="Знімок екрана 2026-11-19 200950" src="https://github.com/user-attachments/assets/345f74b7-ed33-4c03-9e5d-38873606f6a6" />
<img width="457" height="28" alt="Знімок екрана 2026-11-19 201044" src="https://github.com/user-attachments/assets/2cb4907a-2fb8-4321-b24c-dc760aab1275" />


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
<img width="1561" height="876" alt="image" src="https://github.com/user-attachments/assets/4ed9b500-0c7e-4795-a613-d127cd274967" />
Висновки
Під час виконання роботи було закріплено навички роботи з динамічною пам'яттю в мові програмування C++:
опановано виділення пам'яті для одновимірних (new int[size]) та двовимірних (new int*[rows]) динамічних масивів;
реалізовано алгоритми модифікації елементів, сортування методом обміну та обчислення суми квадратів елементів матриці;
закріплено правила коректного звільнення виділеної пам'яті за допомогою оператора delete[] для запобігання витокам пам'яті.

