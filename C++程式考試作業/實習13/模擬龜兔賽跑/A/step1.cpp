#include <iostream>
#include <iomanip>
#include "race.h"
using namespace std;
void printPath(const int);
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
//解決亂碼
