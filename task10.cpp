#include <iostream>
using namespace std;
void discounted(string name,float price,float payable);

main(){
string name;
float price;
float payable;
cout << "Enter country name: " << endl ;
cin >> name ;
cout << "Enter ticket price: " << endl ;
cin >> price ;
cout << "payabble is " << payable ;
discounted(name,price,payable);
}
void discounted(string name,float price,float payable){
if(name == " Pakistan "){
payable = price - ( price * 0.05 ) ;
cout << payable ;
 }
if(name == " Ireland "){
payable = price - ( price * 0.1 ) ;
cout << payable ;
 }
if(name == " India "){
payable = price - ( price * 0.2 ) ;
cout << "payable is " << payable ;
 }
if(name == " England "){
payable = price - ( price * 0.3 ) ;
cout << payable ;
 }
if(name == " canada "){
payable = price - ( price * 0.45 ) ;
cout << payable ;
 }
}


