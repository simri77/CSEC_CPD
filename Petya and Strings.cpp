#include <iostream>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    for (char &c : a) {
        if (c >= 'A' && c <= 'Z') {
            c += 32;
        }
    }

    for (char &c : b) {
        if (c >= 'A' && c <= 'Z') {
            c += 32;
        }
    }
    if (a < b){
        cout << "-1";
    }
    else if(a > b) {
        cout << "1";
    }
    else{
        cout << "0";
    }

    return 0;
}
