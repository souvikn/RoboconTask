#include <iostream>
using namespace std;
int main(){
    int ar[10];
    cout <<"Enter 10 numbers:\n";
    for(int i=0; i < 10;i++){
        cin >> ar[i];
        if(ar[i] < 0 || ar[i] > 9){
            i--;
            cout << "Enter a digit which is between 0 and 9:\n";
        }
    }
    for(int i=0; i<10;i++)
    {
    int c=0;
    for(int j=0; j < 10;j++)
    {
    if(ar[i]==ar[j])
    c++;
    }
bool f = false;
for(int k=0; k < i;k++)
{
if(ar[k]== ar[i])
f=true;
}
if(!f)
cout << "Count of "<< ar[i]<<" is "<< c<<"\n";
    }
    return 0;
}