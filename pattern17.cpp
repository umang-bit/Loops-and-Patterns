// 5
// **** 
// ***
// **
// *

// using namespace std;
// int main(){
//     cout<<"enter the value of n"<<endl;
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         int space=n-i;
//         while(space){
//             cout<<"*";
//             space--;
//         }
//         while(j<=i){
//             cout<<" ";
//             j++;
//         }
//     cout<<endl;
//     i++;
//     }
// return 0;
// }
// or you just have to print n-i+1stars no need of spaces
#include <iostream>
using namespace std;
int main(){
    cout<<"enter the value of n"<<endl;
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n-i+1;
        while(j){
            cout<<"*";
            j--;
        }
    cout<<endl;
    i++;
    }
return 0;
}