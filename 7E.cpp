

#include <iostream>

using namespace std;

int main() {
    int arr_elements;

    cout << "Enter the size of the array: ";
    cin >> arr_elements;

    int arr[arr_elements];

    for(int i = 0;  i < arr_elements; i++) {
        cout << "Enter the element [" << i + 1 << "]: ";
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];

    for(int j = 0; j < arr_elements; j++) {
        if(arr[j] > max) {
            max = arr[j];
        }
    }

    for(int j = 0; j < arr_elements; j++) {
        if(arr[j] < min) {
            min = arr[j];
        }
    }

    cout << "The largest element in the array: " << max << endl;
    cout << "The smallest element in the array: " << min;

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
The largest element in the array: 5
The smallest element in the array: 1

*/
