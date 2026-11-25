#include <iostream>
using namespace std;

int main() {
    int arr[20] = {10, 20, 30, 40, 50};
    int n = 5, pos, value;

    cout << "Before insertion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\nEnter position: ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> value;

    for (int i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = value;
    n++;

    cout << "After insertion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
