#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    
    int i=1;
    while(i<=n){
        char first='A'+n-i;
        int j=1;
        while(j<=i){
            cout<<first;
            j++;
            first++;
        }
    cout<<endl;
    i++;
    }
    return 0;
}
// D
// CD
// BCD
// ABCD