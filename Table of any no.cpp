

#include <iostream>
using namespace std;
int main() {
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    for (int i = 1; i <= 10; ++i) {
        cout << num <<"*"<<i<<"=" << num*i<<"\n";
    }

    return 0;
}