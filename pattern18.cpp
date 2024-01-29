//  ****
//   ***
//    **
//     *
// in this case its just interchanging space and star while printing
#include <iostream>
using namespace std;
int main(){
    cout<<"enter the value of n"<<endl;
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int star=n-i+1;
        while(j<=i){
            cout<<" ";
            j++;
        }
        while(star){
            cout<<"*";
            star--;
        }
        
    cout<<endl;
    i++;
    }
return 0;
}