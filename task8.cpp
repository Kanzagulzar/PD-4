#include <iostream>
using namespace std;
void equal(int num1,int num2);

main(){
int num1;
int num2;
cout << "Enter num 1: " << endl ;
cin >> num1 ;
cout << "Enter num 2: " << endl ;
cin >> num2 ;
equal(num1,num2);
}
void equal(int num1,int num2){
if(num1 == num2){
 cout << " true " <<endl ;
}
if(num1 != num2){
 cout << " false " <<endl ;
}
}

