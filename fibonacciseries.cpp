// in this series each  term is the sum of previous two terms
// 0 1 1 2 3 5 8 13 21 34 
#include <iostream>
using namespace std;
int main(){
    int first=0;
    int second=1;
    cout<<"enter the value of n"<<endl;
    int n;
    cin>>n;
    cout<<first<<" "<<second<<" ";

    for(int i=1;i<=n-2;i++){
        int sum=0;
        sum=first+second;
        first=second;
        second=sum;
        cout<<sum<<" ";
    }
    return 0;
}