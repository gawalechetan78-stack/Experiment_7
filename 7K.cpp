

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    bool isPalindrome;

    cout << "Enter a string: ";
    cin >> str;

    for(int i = 0; i < str.length()/2; i++) {
        if(str[i] != str[str.length() - 1 -i]) {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome) {
        cout << "The string is palindrome" << endl;
    } else {
        cout << "The string is NOT palindrome" << endl;
    }

    return 0;
}

/* Output

Enter a string: level
The string is palindrome

Enter a string: power
The string is NOT palindrome

*/
