#pragma once
#include <iostream>


namespace Algorithm
{
	class NumberArray
	{
		private:
			std::size_t count;
			int* nums;

		public:
			NumberArray(int count);
			~NumberArray();
			bool binSearch(int element);
			bool recursiveBinSearch(int element, int startIdx = 0, int endIdx = -100);
	};
	
	
}