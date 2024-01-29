#include <iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"enter the value of n";
    cin>>n;
    // you dont put comma inside you put semicolon and after increment decrement you dont even put the semicolon you just put the bracket
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum;
    return 0;
}
// to print sum of numbers from 1 to n