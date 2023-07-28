/*
star patterns in c++

*
**
***
****
*****

*/

#include <iostream>
using namespace std;

int main(){
    int i, j, n;

    cout << "Enter number of rows, columns: ";
    cin >> n;   // 5

    for(i=0; i<n; i++){
        for(j=0; j<=i; j++){
            if(j == 0 || i == n-1 || i == j){
                cout << "* ";
            }else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
/*
Output: (row, col)

Enter number of rows, columns: 5
* * * * *
*       *
* * * * *
*       *
*       *

if(i == 1){
    print the star
}else{
    do not print the star
}

* * * * *
*       *
* * * * *
*       *
*       *

*/