#include <iostream>
#include "arithmetics.h"

void Panic(const int result){
	std::cout << "Unexpected result: " << result << std::endl;
}

void Print_success() {
    std::cout << "Ok!" << std::endl;
}

int main(){
	int first, second;
	std::cin >> first >> second;
	
	int result_sum = sum(first, second);
	int result_mul = sum(first, second);

	if (result_sum != first + second){
		Panic(result_sum);
	}
	else{
		Print_success();
	}

	if (result_mul != first * second){
		Panic(result_mul);
	}
	else{
		Print_success();
	}

	return 0;	
}	
