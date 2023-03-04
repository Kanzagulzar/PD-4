#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void printname();

main(){
 system("cls");
 int x = 22 ;
 int y = 19 ;
 cout << " Kanza tul Islam " ;
 printname();
 gotoxy(x,y);
}

void gotoxy(int x,int y){
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
  }
