
#include <iostream>

using namespace std;

int main() {
    char str[100] = {'H', 'e', 'l', 'l', 'o'};

    for(int i = 0; i < sizeof(str)/sizeof(char); i++) {
        cout << str[i];
    }

    cout << endl;

    return 0;
}

/* Output

Hello

*/
