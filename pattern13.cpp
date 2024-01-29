// A
// BC
// CDE
// DEFG
#include <iostream>
using namespace std;
int main(){
    cout<<"enter the value of n"<<endl;
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch ='A'+i+j-2;//in this making formula is important look i and j for every value and then sub
            cout<<ch;
            j++;
        }
    cout<<endl;
    i++;
    }
return 0;
}