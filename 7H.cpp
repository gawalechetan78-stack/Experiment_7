

#include <iostream>
#include <string>

using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "The string is: " << str << endl;
    
    return 0;
}

/* Output

Enter a string: Hello, World!
The string is: Hello, World!

*/
