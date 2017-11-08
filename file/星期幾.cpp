#include <iostream>
 
 int main(){
 	
 	int num;
 	
 	std::cin >> num;
 	
 	if ( num == 1 )
 		
	 std::cout << "Monday" << std::endl; 
	else if ( num == 2)
	 std::cout << "Tuesday" << std::endl;
	else if ( num == 3)
	std::cout << "Wednesday" << std::endl;
	else if ( num == 4)
	 std::cout << "Thursday" << std::endl;
	else if ( num == 5)
	 std::cout << "friday" << std::endl;
	else if ( num == 6)
	 std::cout << "Saturday" << std::endl;
	else if ( num == 7)
	 std::cout << "Sunday" << std::endl;
	else
	 std::cout << "87亂輸入欠打?" << std::endl;
 }
