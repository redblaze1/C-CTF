#include <iostream>
using namespace std;
bool isPerfect(int);


int main()
{
   int start, end;
   cin >>start >>end;
   
   for ( int j = start; j <= end; j++ )
   {
      if ( isPerfect( j ) ) 
         cout << j<<" "; 
   } 

   cout << endl;
}

bool isPerfect(int j){
	int sum=0;
	for(int n=j;n>0;n--){
		if (j%n==0 && j!=n)
			sum+=n;
	}
	if (sum==j)
		return true;
	else
		return false;	
}
