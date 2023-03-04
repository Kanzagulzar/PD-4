#include <iostream>
using namespace std;
void check(string term,string true,string false);

main(){
string term;
string true;
string false;
cout << "Enter " << endl ;
cin >> term ;
check(term,true,false);
}
void check(string term,string true,string false){
if( term == " true "){
 cout << " false " <<endl ;
 }
if( term == " false "){
 cout << " true " <<endl ;
 }
}

