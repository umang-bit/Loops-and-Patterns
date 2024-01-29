#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    int i=1;
    while (i<=n){
        int j=i;
        while(j>=1){
            cout<<j;
            j--;
        }
    i++;
    cout<<endl;
    
    }
return 0;
}
/*
1
21
321
4321
one more method keep all conditions normal just cout keep i-j+1 it works.
*/