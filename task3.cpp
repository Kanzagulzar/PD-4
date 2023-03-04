#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void printMaze();
void playermove(int x,int y);

main(){
 system("cls");
 printMaze();
 int x = 5;
 int y = 5;
 while(true){
 if(x<5);
 x=x+1;
 playermove(x,y);
 }
  while(true){
 if(x == 20);
 x = x-1 ;
 playermove(x,y);
}
}

void printMaze(){
cout << "###############################"<< endl ;
cout << "#                             #"<< endl ;
cout << "#                             #"<< endl ;
cout << "#                             #"<< endl ;
cout << "#                             #"<< endl ;
cout << "#                             #"<< endl ;
cout << "#                             #"<< endl ;
cout << "###############################" << endl;
  }

void gotoxy(int x,int y){
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
  }
void playermove(int x,int y){
   gotoxy(x = x-1,y);
   cout << "  " ;
   cout << "P" ;
   Sleep(500);
  }