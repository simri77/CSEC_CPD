#include <iostream>

using namespace std;

int main()
{

    int n, s = 0, d = 0;

    cin >> n;
    int c[n];
    int l = 0, r = n-1;
    int turn = 0;
    for (int i = 0; i < n; i++){
        cin >> c[i];
    }
    while (l <= r){

        if (c[l] > c[r]){
            if (turn % 2 == 0)
                s += c[l];
            else
                d += c[l];
            l++;
            turn++;
        }else {
            if (turn % 2 == 0)
                s += c[r];
            else
                d += c[r];
            r--;
            turn++;
        }
    }


    cout << s << " "<< d;

    return 0;
}
