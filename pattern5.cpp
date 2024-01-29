/*
1
23
345
4567
notice here it starts with row number always
int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j = i;
        while(j<2*i){
            cout<<j<<" ";
            j =j+1;
        }
        cout<<endl;
        i =i+1;
    }


=> Explanation :
Observe the pattern carefully
1
2 3
3 4 5
4 5 6 7 

we set the condition while (j<2*i) in 2nd while loop cuz in above pattern 
every row starts with the the row number(value of i) N ends before the twice of its row value..

1                         (row number, i = 1 So, j<2*1 ,i.e 2)
2 3                       Similarly, 2*2 =4 & lastValue : 3
3 4 5
4 5 6 7
*/
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
        int count=i;
        while(j<=i){
            cout<<count;/*here if you do n-j+1 youll get 321 321 321*/
            j++;
            count++;
        }
    i++;
    cout<<endl;
    
    }
return 0;
}