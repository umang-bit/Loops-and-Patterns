/* triangle pattern*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    int i=1;
    while (i<=n){
        int j=1;
        while(j<=i){
            cout<<"*";/*here if you do n-j+1 youll get 321 321 321*/
            j++;
        }
    i++;
    cout<<endl;
    
    }
return 0;
}