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
void moveHare( int * const );

int main(){

    int tortoise=1;
    int hare = 1;
    int count =0;
    srand( time( 0 ) );
    
    while ( tortoise != RACE_END && hare != RACE_END ) 
   {
      Sleep( 50 );
      Clr();
      moveTortoise( &tortoise );
      moveHare(&hare);
      if(tortoise>70)
      tortoise=70;
      if(hare>70)
      hare=70;
      printCurrentPositions( &tortoise, &hare );
      count++;
      if (tortoise==70 && hare==70)
      cout << "用了" << count << "秒  " << "It's a tie!" << endl;
      else if (tortoise==70)
      cout << "用了" << count << "秒  " << "TORTOISE WINS!!!YAY!!!" << endl;
      else if (hare==70)
      cout << "用了" << count << "秒  " << "Hare wins. Yuch." << endl;
   } // end loop
   
    

   system("PAUSE");
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
}  // end function moveTortoise

void moveHare( int * const rabbitPtr )
{
  	int a=rand()%10+1;
	if (a<=2);
	else if (a>2 && a<=3){
		if (*rabbitPtr-12<=0)
		*rabbitPtr=1;
		else
		*rabbitPtr-=12;
	}
	else if (a>3 && a<=5)
	*rabbitPtr+=9;
	else if (a>5 && a<=8)
	*rabbitPtr+=1;
	else if (a>8 && a<=10){
		if (*rabbitPtr-2<=0)
		*rabbitPtr=1;
		else
		*rabbitPtr-=2;
	}
} // end function moveHare

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
} // end function printCurrentPositions
