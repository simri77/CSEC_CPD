#include <iostream>
 
using namespace std;
 
int main()
{
    int n, h;
    int a[1000];
    int b[1000];
    int sum = 0;
    cin >> n;
    cin >> h;
    
    for( int i = 1; i <= n; i++){
        cin >> a[i];
        if(a[i] > h)
            b[i] = 2;
        else
            b[i] = 1;
        sum = sum + b[i];
    }
    
    cout << sum << endl;
 
 
 
 
 
    return 0;
}
