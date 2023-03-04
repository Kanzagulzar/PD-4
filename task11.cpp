#include <iostream>
using namespace std;
void limit(int speed);

main(){
int speed;
cout << "Enter car speed: " << endl ;
cin >> speed ;
limit(speed);
}
void limit(int speed){
if(speed >= 101){
cout << "Halt u will be challaned" << endl ;
 }
if(speed == 100){
cout << "Perfect u r good" << endl ;
 }
}
