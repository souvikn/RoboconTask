#include <iostream>
using namespace std;
class Control
{
 private:
int speed, battery;
public:
void setSpeed(int s)
{
speed=s;
}
void setBattery(int b)
{
battery=b;
}
void moveForward()
{
cout <<"Forward"<<endl;
}
void moveBackward(){
    cout<<"Backward"<<endl;
}
void turnLeft(){
    cout<<"Left"<<endl;
}
void turnRight(){
    cout<<"Right"<<endl;
}
void displayStatus(int s, int b)
{
cout <<"Robot speed:"<<s<<endl;
cout <<"Battery:"<< b<<endl;
}
};
int main()
{
Control ob;
int speed, battery;
cout <<"Speed:";
cin>>speed;
cout <<endl;
cout <<"Battery:";
cin>>battery;
ob.setSpeed(speed);
ob.setBattery(battery);
char ch='y';
char c;
while(ch== 'y')
{ 
cout << "Enter y or n to enter again or to stop"<<endl;
cin >> ch;
if(ch=='n')
return 0;
cout << "Enter F for forward, B for backward, L for Left and R for Right and S for Status"<<endl;
cin >> c;
switch (c){
    case 'F':
    ob.moveForward();
    battery=battery-5;
    break;
    case 'B':
    ob.moveBackward();
    battery=battery-5;
    break;
    case 'L':
    ob.turnLeft();
    battery=battery-5;
    break;
    case 'R':
    ob.turnRight();
    battery=battery-5;
    break;
    case 'S':
    ob.displayStatus(speed, battery);
    break;
default:cout <<"INVALID"<<endl;
}
}
}