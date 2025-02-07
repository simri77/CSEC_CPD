#include <iostream>

using namespace std;

int main()
{
   int a, b, y = 0;
   
   cin >> a >> b;
   for (int i = 0; i <= 10; i++){
    while (a <= b){
        a = a * 3;
        b = b * 2;
        y++;
   }

   }

   cout << y;
    return 0;
}
