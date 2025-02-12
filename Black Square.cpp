#include <iostream>

using namespace std;

int main()
{
    int a[4];
    string s;
    int cal = 0;
    for (int i = 0; i < 4; i++){
        cin >> a[i];
    }
    cin >> s;

for(char &c : s){
        if (c == '1')
            cal += a[0];
        else if (c == '2')
            cal += a[1];
        else if (c == '3')
            cal += a[2];
        else
            cal += a[3];


    }


    cout << cal;
    return 0;
}
