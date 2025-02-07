#include <iostream>

using namespace std;

int main()
{
   int m[5][5];
   int r, c;
   int r_m, c_m;

   for(int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++){
        cin >> m[i][j];

        if (m[i][j]== 1){
            r = i + 1;
            c = j + 1;
        }
    }
   }

   if(r > 3){
    r_m = r - 3;
   }else{
   r_m = 3 - r;
   }
   if(c > 3){
    c_m = c - 3;
   }else{
   c_m = 3 - c;
   }

   cout << c_m + r_m;
    return 0;
}
