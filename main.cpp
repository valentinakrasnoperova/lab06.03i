#include <iostream>
#include <iomanip>
#include <time.h>
#include "func.h"

using namespace std;

template <typename T> // шаблон функції
void Create(T* arr, const int size, T Low, T High) {
    for (int i = 0; i < size; i++)
        arr[i] = Low + rand() % (High - Low + 1);
}
void Create(int* arr, const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++)
        arr[i] = Low + rand() % (High - Low + 1);
}

template <typename T> // шаблон функції
void Print(T* arr, const int size) {
    for (int i = 0; i < size; i++)
        cout << setw(4) << arr[i];
    cout << endl;
}

void Print(int* arr, const int size) {
    for (int i = 0; i < size; i++)
        cout << setw(4) << arr[i];
    cout << endl;
}

template <typename T> // шаблон функції
T Sum(T* arr, const int size) {
    T sum = 0;
    for (int i = 0; i < size; i++)
        if (arr[i]  > 0) sum += arr[i];
    return sum;
}


int main() {
    srand((unsigned)time(NULL));  // ініціалізація генератора випадкових чисел
    const int SIZE = 10;
    int arr[SIZE];

    int Low = 10;
    int High = 70;

    Create<int>(arr, SIZE, Low, High);
    Create(arr, SIZE, Low, High);
    Print<int>(arr, SIZE);
    Print(arr, SIZE);
    cout << "Sum= " << Sum<int>(arr, SIZE) << endl;
    cout << "Sum = " << Sum(arr, SIZE) << endl;
    return 0;
}
