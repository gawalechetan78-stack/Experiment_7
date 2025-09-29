
#include <iostream>

using namespace std;

int main() {
    int arr_elements;
    int sum = 0;
    int average = 0;

    cout << "Enter the size of the array: ";
    cin >> arr_elements;

    int arr[arr_elements];

    for(int i = 0;  i < arr_elements; i++) {
        cout << "Enter the element [" << i + 1 << "]: ";
        cin >> arr[i];
    }

    for(int j = 0; j < arr_elements; j++) {
        cout << arr[j] << "\t";
    }

    cout << endl;

    for(int j = 0; j < arr_elements; j++) {
        sum += arr[j];
    }

    average = sum / arr_elements;

    cout << "Sum of the elements of array: " << sum << endl;
    cout << "Avergae of the elements of array: " << average;

    cout << endl;
    return 0;
}

/* Output

Enter the size of the array: 5
Enter the element [1]: 1
Enter the element [2]: 2
Enter the element [3]: 3
Enter the element [4]: 4
Enter the element [5]: 5
1       2       3       4       5
Sum of the elements of array: 15
Avergae of the elements of array: 3

*/
