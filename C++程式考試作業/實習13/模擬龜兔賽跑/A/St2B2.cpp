#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "race.h"

using namespace std;
void printCurrentPositions( const int * const snapperPtr, 
   const int * const bunnyPtr );


const int RACE_END = 70;

void moveTortoise( int *const );


int main(){

    int tortoise=1;
    int hare = 1;
    
    srand( time( 0 ) );
    
    while ( tortoise != RACE_END && hare != RACE_END ) 
   {
      Sleep( 100 );
      Clr();    
      moveTortoise( &tortoise );
      printCurrentPositions( &tortoise, &hare );
      //timer++;
   } // end loop
   
    

   // system("PAUSE");
}
void moveTortoise( int * const turtlePtr )
{
	int a=rand()%10+1;
	if (a<=5)
	*turtlePtr+=3;
	else if (a>5 && a<=7){
		if (*turtlePtr-6<=0)
		*turtlePtr=1;
		else
		*turtlePtr-=6;
	}
	else if (a>7)
	*turtlePtr+=1;
}

void printCurrentPositions( const int * const snapperPtr, 
   const int * const bunnyPtr )
{
	int a=*snapperPtr;
	int b=*bunnyPtr;
	for (int i=1;i<=7;i++){
	cout << "---------|";
	if (i==7)
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
}
