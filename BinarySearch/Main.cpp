#include <iostream>
#include "Algorithm/Algorithm.h"


int main()
{
	auto number = -1;
	auto array = Algorithm::NumberArray(20);
	for (auto i = -30; i < 30; ++i)
	{
		std::cout << i << ".:" << (array.recursiveBinSearch(i) ? "YES" : "NO") << std::endl;
	}
	getchar();
	return 0;
}
