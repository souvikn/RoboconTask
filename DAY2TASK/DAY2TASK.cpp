#include <iostream>
using namespace std;
class Robo
{
private:
int l = 0;
int r = 0;
int ar[8];
public:

void input()
{
    for(int i=0; i < 8;i++){
        cin>>ar[i];
        if(!(ar[i]==1 || ar[i]==0)){
            cout<<"Enter only 0 or 1"<<endl;
            i--;
        }
    }
}
double pos(bool &f){
int s=0;
int c=0;
    for(int i=0; i <8;i++)
    {
        if(ar[i]==1){
            s+=i;
            c++;
    }
}
    if(c==0){
    f=false;
    return -1;
    }
    f=true;
    return (double)s/c;
}
void decide(){
    bool f;
    double check= pos(f);
    double ce= 3.5;
    double t=0.5;
    if(check < ce-t){
        cout <<"Line Position: Left"<<endl;
        cout<<"Turn Left"<<endl;
    }
    else if(check>ce+t){
        cout <<"Line Position: Right"<<endl;
        cout<<"Turn Right"<<endl;
    }
    else if(!f){
        cout<<"Line Lost";
        
    }
    else{
        cout<<"Position: Centre"<< endl;
        cout<<"Move Forward"<<endl;
}
}
};
int main(){
    Robo ob;
    ob.input();
    ob.decide();
}