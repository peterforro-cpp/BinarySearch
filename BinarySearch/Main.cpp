#include <iostream>
#include "Algorithm/Algorithm.h"


int main()
{
	auto element = -1;
	auto array = Algorithm::NumberArray(20);

	std::cout << (array.binSearch(element) ? "YES" : "NO") << std::endl;
	
	getchar();
	return 0;
}
