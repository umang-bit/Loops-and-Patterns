// ABC
// BCD
// CDE
// similar to the one we saw earlier for numbers but in this case it is alphabets so in numbers
// we used cout i+j-1 
// and i+j-1 in the beginning gave us 1 but we need A this time so add A-1 both sides
// i+j-1=1
// i+j-1-1+A=1-1+A
// we get A+i+j-2
// ABC
// ABC
// ABC
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
            char ch = 'A'+i+j-2;
            // this typecasting part is important just put char = to something and then you can even add charachters with numbers
            cout<<ch;
            j++;
        }
    i++;
    cout<<endl;
    
    }
return 0;
}
