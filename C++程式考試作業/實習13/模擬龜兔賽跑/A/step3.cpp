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
void moveHare( int * const );
void randomMove(const int action[], int &entityLocation );

int main(){

    int tortoise=1;
    int hare = 1;
    unsigned long long int timeMS = 0;
    const int sleepMS = 100;

    srand( time( 0 ) );

    while ( tortoise != RACE_END && hare != RACE_END )
   {
      Sleep( sleepMS );
      timeMS += sleepMS;
      Clr();

      moveTortoise( &tortoise );
      moveHare(&hare);
      printCurrentPositions( &tortoise, &hare );

   } // end loop

   // print winner
    if(tortoise == RACE_END && hare == RACE_END) // both win
        cout<< "It's a tie!" <<endl;
    else if( hare == RACE_END) // hare win
        cout<< "Hare wins. Yuch."<<endl;
    else // turtle win
        cout<< "TORTOISE WINS!!!YAY!!!"<<endl;

   // print time
    cout<<"TIME ELAPSED = "<<timeMS / 1000 << " seconds (Real)"<<endl<<"Step Count = "<<timeMS / sleepMS << " times"<<endl;



   // system("PAUSE");
}

void moveTortoise( int * const turtlePtr )
{
    // 機率(%), 移動次數
    int action[10] = {3,3,3,3,3,-6,-6,1,1,1};

    // move
    randomMove(action, *turtlePtr);

}

void moveHare( int * const rabbitPtr )
{
    // 機率(%), 移動次數
    int action[10] = {0,0,9,9,-12,1,1,1,-2,-2};

    // move
    randomMove(action, *rabbitPtr);

} // end function moveHare

void randomMove(const int action[], int &entityLocation ){
    // move random
    entityLocation += action[rand()%10];

    // fix value
    entityLocation = entityLocation < 1 ? 1 : entityLocation > RACE_END ? RACE_END : entityLocation;
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
