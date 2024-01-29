// AAA
// BBB
// CCC
// here we use ascii values and typecasting
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
        while(j<=n){
            char ch = 'A'+i-1;
            // this typecasting part is important just put char = to something and then you can even add charachters with numbers
            cout<<ch;
            j++;
        }
    i++;
    cout<<endl;
    
    }
return 0;
}