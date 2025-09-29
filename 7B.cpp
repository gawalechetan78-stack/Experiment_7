

#include <iostream>

using namespace std;

int main() {
    int arr_elements;
    int usr_element;
    
    cout << "Enter the size of the array: ";
    cin >> arr_elements;

    int arr[arr_elements];

    for(int i = 0;  i < arr_elements; i++) {
        cout << "Enter the element [" << i + 1 << "]: ";
        cin >> arr[i]; 
    }

    cout << "Enter the element to search: ";
    cin >> usr_element;

    for(int j = 0; j < arr_elements; j++) {
        if(arr[j] == usr_element) {
            cout << "Element " << usr_element << " found at index " << j + 1;
        }
    }

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
Enter the element to search: 2
Element 2 found at index 2

*/
