#include <iostream>
#include <algorithm>

const int N = 3; // Големина на двумерния масив

// Функция за отпечатване на елементите на масив
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Отпечатване на условието на задачата
    std::cout << "Condition: Process a two-dimensional array A[N,N] of integers in the range [-10;10]." << std::endl;
    std::cout << "Author: Ivan Gamalov" << std::endl;

    int A[N][N];
    int C[N * N]; // Масив C, който ще съдържа елементите на A, чиито квадрати са > 50
    int C_size = 0; // Размер на масив C

    // Въвеждане на входните данни
    std::cout << "Enter the input data for the two-dimensional array A[N,N]: " << std::endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cin >> A[i][j];
        }
    }

    // Отпечатване на входните данни
    std::cout << "Input data: " << std::endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << A[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Формиране на масив C, чиито елементи са елементите на A, чиито квадрати са > 50
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int square = A[i][j] * A[i][j];
            if (square > 50) {
                C[C_size++] = A[i][j];
            }
        }
    }

    // Сортиране на масив C
    std::sort(C, C + C_size);

    // Отпечатване на получените резултати
    std::cout << "Array C after processing: ";
    printArray(C, C_size);

    return 0;
}
