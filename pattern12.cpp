// A
// BC
// DEF
// GHIJ
// COUNTING METHOD within the j loop
#include <iostream>
using namespace std;
int main(){
    cout<<"enter the value of n"<<endl;
    int count=1;
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j =1;
        while(j<=i){
            char ch='A'+count-1;
            cout<<ch;
            j++;
            count++;
        }
    cout<<endl;
    i++;
    }
return 0;
}