#include <iostream>

using namespace std;

int main()
{

    string word;
    cin >> word;
    int u = 0, l = 0;


    for (char &c : word){
        if (c >= 'A' && c <= 'Z'){
            u++;
        }else if (c>= 'a' && c <= 'z'){
            l++;
        }
    }
    if (l >= u){
        for (char &c : word){
            if (c >= 'A' && c <= 'Z')
                c += 32;
        }
    }else {
       for (char &c : word){
            if (c >= 'a' && c <= 'z')
                c -= 32;
       }
    }
    cout << word;
    return 0;
}
