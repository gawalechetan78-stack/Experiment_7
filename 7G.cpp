
#include <iostream>
#include <string>

using namespace std;

int main() {
    char str_1[4] = "C++";
    char str_2[] = {'C', '+', '+', '\0'};
    char str_3[4] = {'C', '+', '+', '\0'};
    string str_4 = "C++";

    cout << str_1 << endl;

    for(int i = 0; i < sizeof(str_2)/sizeof(char); i++) {
        cout << str_2[i];
    }

    cout << endl;

    for(int i = 0; i < 4; i++) {
        cout << str_3[i];
    }

    cout << endl;

    cout << str_4 << endl;

    return 0;
}

/* Output

C++
C++
C++
C++

*/
