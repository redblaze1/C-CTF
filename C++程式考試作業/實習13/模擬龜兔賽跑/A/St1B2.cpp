#include <iostream>
#include <iomanip>
#include "race.h"
using namespace std;


void printCurrentPositions( const int * const snapperPtr, 
   const int * const bunnyPtr );
   //snapper turtle ¯QÀt
   //bunny ¨ß¤l

const int RACE_END = 70;
    
int main(){
    int tortoise=10;  //tortoise ³°Àt
    int hare = 20;  //hare ³¥¨ß
    printCurrentPositions(&tortoise, &hare);
    //system("PAUSE");
}

void printCurrentPositions( const int * const snapperPtr, 
   const int * const bunnyPtr )
{
	int a=*snapperPtr;
	int b=*bunnyPtr;
	for (int i=1;i<=10;i++){
	cout << "---------|";
	if (i==10)
	cout << "\n";
	}
	for(int i=1;i<=*snapperPtr;i++){
	if (i==a)
	cout << "T" << endl;
	else
	cout << " ";
	}
	for(int i=1;i<=*bunnyPtr;i++){
	if (i==b)
	cout << "R" << endl;
	else
	cout << " ";
	}
} // end function printCurrentPositions


