#include <iostream>
using namespace std;

template <typename T>
void Sum(T a, T b)
{
    cout << a + b << endl;
}

template <typename T, typename X>
void Sum(T a, X b)
{
    cout << a + b << endl;
}

template<class T>
void Init(T mas[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        mas[i] = rand() % 100 * 1.1;
    }
}

template <typename T>
T Sum1(T arr[], int size) {
    T maxVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

template <typename T>
T Sum1(T arr[][3], int rows, int cols) {
    T maxVal = arr[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
            }
        }
    }
    return maxVal;
}

int main()
{
    int mas[10];
    double mas2[5];
    char mas3[8];

    Init(mas, 10);
    Init(mas2, 5);
    Init(mas3, 8);

    int arr1D[] = { 3, 5, 2, 9, 1 };
    int arr2D[2][3] = { {3, 5, 2}, {9, 1, 6} };

    cout << "Sum1 in array: " << Sum1(arr1D, 5) << endl;
    cout << "Sum1 in array: " << Sum1(arr2D, 2, 3) << endl;

    return 0;
}