#pragma once
#include <iostream>

using std::size_t;

namespace Algorithm
{
	struct NumberArray
	{
		size_t count;
		int* nums;

		NumberArray(int count);
		~NumberArray();
		bool binSearch(int element);
	};
	
	bool binSearch(int* num, size_t count, int element);
}