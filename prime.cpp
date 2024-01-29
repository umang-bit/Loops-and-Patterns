// to check if prime using for loop
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of n";
//     cin>>n;
//     for(int i=2;i<=(n-1);i++){
//         if(n%i==0){
//             cout<<"not prime";
//             break;
//         }
//         else{
//             cout<<"prime";
//             break;
//         }
//     }
// }
// but this is wrong cuz even if once the remainder comes non zero so it will go to else but later if it comes zero before that only it will print prime 
// hence we use a flag or a bool variable
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int flag=
    for(int i=2;i<=(n-1);i++){
        if(n%i==0){
            
            break;
        }
        else{
            cout<<"prime";
            break;
        }
    }
}
