

#include <iostream>

using namespace std;

int main() {
    string str_1, str_2;

    cout << "Enter the string 1: ";
    getline(cin, str_1);

    cout << "Enter the string 2: ";
    getline(cin, str_2);

    cout << "The concatenated string is \"" << str_1 + str_2 << "\"" << endl;

    return 0;
}

/* Output

Enter the string 1: Hello
Enter the string 2:  World
The concatenated string is "Hello World"

*/
