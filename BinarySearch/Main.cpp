#include <iostream>
#include "Algorithm/Algorithm.h"


int main()
{
	auto number = -1;
	auto array = Algorithm::NumberArray(20);
	std::cout << (array.recursiveBinSearch(number) ? "YES" : "NO") << std::endl;
	getchar();
	return 0;
}
