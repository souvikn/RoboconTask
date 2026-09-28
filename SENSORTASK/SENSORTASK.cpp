#include <iostream>
using namespace std;
int main()
{
int ar[10];
cout <<"Enter 10 readings:\n";
int s=0;
for(int i=0; i < 10;i++){
    cin >> ar[i];
    if(ar[i] > 20 && ar[i] <100){
    i--;
    cout << "Enter a reading which is less than 20cm and greater than 100 cm\n:";
    }
    
}
int max= ar[0];
int min= ar[0];
for(int i=0;i<10;i++)
{
if(ar[i] < min)
min = ar[i];
else if(ar[i] > max)
max= ar[i];
}
for(int i=0; i < 10;i++)
{
s+=ar[i];
}
double avg = s/10;
cout <<"Maximum:"<< max;
cout <<"Minimum:\n"<< min;
cout <<"Average:\n" << avg;
return 0;
}