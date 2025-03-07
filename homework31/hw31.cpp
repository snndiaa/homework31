#include <iostream>
using namespace std;

unsigned const int SIZE = 5, ROWS = 2, COLS = 3, DEPTH = 2, ROWS_3 = 2, COLS_3 = 3; //константи для розміру масивів

int max_value(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    return max;
}

int max_value(int arr[][COLS], int rows, int cols)
{
    int max = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int max_value(int arr[][ROWS_3][COLS_3], int depth, int rows, int cols)
{
    int max = arr[0][0][0];
    for (int i = 0; i < depth; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            for (int k = 0; k < cols; k++)
            {
                if (arr[i][j][k] > max)
                {
                    max = arr[i][j][k];
                }
            }
        }
    }
    return max;
}

int max_value(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int max_value(int c, int d, int e)
{
    int max_value = c;
    if (d > max_value) 
    {
        max_value = d;
    }
    if (e > max_value) 
    {
        max_value = e;
    }

    return max_value;
}

int main()
{
    int arr1[SIZE];
    cout << "Enter values for the first array: ";
    for (int i = 0; i < SIZE; ++i) 
    {
        cin >> arr1[i];
    }

    cout << "Max in first array: " << max_value(arr1, SIZE) << endl;

    int arr2[ROWS][COLS];
    cout << "\nEnter values for second array: ";
    for (int i = 0; i < ROWS; ++i) 
    {
        for (int j = 0; j < COLS; ++j) 
        {
            cin >> arr2[i][j];
        }
    }

    cout << "Max in second array: " << max_value(arr2, ROWS, COLS) << endl;

    int arr3[DEPTH][ROWS_3][COLS_3];
    cout << "\nEnter values for a third array: ";
    for (int i = 0; i < DEPTH; ++i) 
    {
        for (int j = 0; j < ROWS_3; ++j) 
        {
            for (int k = 0; k < COLS_3; ++k) 
            {
                cin >> arr3[i][j][k];
            }
        }
    }

    cout << "Max in third array: " << max_value(arr3, DEPTH, ROWS_3, COLS_3) << endl;

    int a, b;
    cout << "\nEnter two values to find the max: ";
    cin >> a >> b;
    cout << "Max value: " << max_value(a, b) << endl;

    int c, d, e;
    cout << "\nEnter three values to find the max: ";
    cin >> c >> d >> e;
    cout << "Max value: " << max_value(c, d, e) << endl;

    return 0;
}