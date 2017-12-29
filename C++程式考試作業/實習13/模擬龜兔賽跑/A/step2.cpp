#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "race.h"

using namespace std;
void printPath(const int);
void printCurrentPositions( const int * const snapperPtr,
   const int * const bunnyPtr );


const int RACE_END = 70;

void moveTortoise( int *const );


int main(){

    int tortoise=1;
    int hare = 1;
void printPath(const int);
    srand( time( 0 ) );

    while ( tortoise != RACE_END && hare != RACE_END )
   {
      Sleep( 500 );
      Clr();
      moveTortoise( &tortoise );
      printCurrentPositions( &tortoise, &hare );
      //timer++;
   } // end loop



   // system("PAUSE");
}
void moveTortoise( int * const turtlePtr )
{
    // 機率(%), 移動次數
    int action[10] = {3,3,3,3,3,-6,-6,1,1,1};

    // move random
    *turtlePtr += action[rand()%10];

    // fix value
    *turtlePtr = *turtlePtr < 1 ? 1 : *turtlePtr > RACE_END ? RACE_END : *turtlePtr;

}

void printPath(const int pathLengh){
    for(int i = 1; i< pathLengh ; i++)
        cout<<" ";
}

void printCurrentPositions( const int * const snapperPtr,
   const int * const bunnyPtr )
{
    //print Map
    for(int i = 0 ; i < RACE_END/10 ; i++)
        cout<< "---------|";
    cout<<endl;

    //print hare
    printPath(*bunnyPtr);
    cout<<"H"<<endl;

    //print turtle
    printPath(*snapperPtr);
    cout<<"T"<<endl;

} // end function printCurrentPositions
