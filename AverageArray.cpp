{{{cpp
/* 2.7.3 Average pg 63
Write an averaging program that prompts the user to enter a positive integer that specifies the number of values to average.
* Then output the array index with its value then display the average.

*/

#include <iostream>
using namespace std;
// This one works  why do these comments not show up
int main()
{
    int n_my_Array_size, i;
    float num_my_Array[100], sum = 0.0, average;

    cout << "Enter the numbers of data: ";
    cin >> n_my_Array_size;

    while (n_my_Array_size > 100 || n_my_Array_size <= 0)
    {
        cout << "Error! number should in range of (1 to 100)." << endl;
        cout << "Enter the number again: ";
        cin >> n_my_Array_size;
    }

    for (i = 0; i < n_my_Array_size; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num_my_Array[i];
        sum += num_my_Array[i];
    }

    average = sum / n_my_Array_size;
    cout << "Average = " << average;

    return 0;
}
