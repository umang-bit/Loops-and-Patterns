#include <iostream>
using namespace std;
int main(){
    cout<<"enter the value of n"<<endl;
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        char ch='A'+i-1;
        int j =1;
        while(j<=i){
            cout<<ch;
            j++;
        }
    cout<<endl;
    i++;
    }
return 0;
}
// A
// BB
// CCC
// DDDD