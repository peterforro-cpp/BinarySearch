#include "Algorithm.h"

namespace Algorithm
{
	NumberArray::NumberArray(int count)
	{
		this->count = count;
		nums = new int[count];
		for (auto i = 0; i < count; ++i)
		{
			nums[i] = i + 1;
		}
	}

	NumberArray::~NumberArray()
	{
		delete[] nums;
	}

	bool NumberArray::binSearch(int element)
	{
		auto startIdx = 0;
		auto endIdx = (int)(count - 1);
		while (startIdx <= endIdx)
		{
			auto middle = (startIdx + endIdx) / 2;
			if (nums[middle] == element)
			{
				return true;
			}
			else if (nums[middle] < element)
			{
				startIdx = middle + 1;
			}
			else
			{
				endIdx = middle - 1;
			}
		}
		return false;
	}

	bool NumberArray::recursiveBinSearch(int element, int startIdx, int endIdx)
	{
		endIdx = endIdx == -100 ? count - 1 : endIdx;
		auto middle = (startIdx + endIdx) / 2;
		if (startIdx > endIdx)
		{
			return false;
		}
		else if (nums[middle] == element)
		{
			return true;
		}
		else if (nums[middle] < element)
		{
			return recursiveBinSearch(element, middle + 1, endIdx);
		}
		else
		{
			return recursiveBinSearch(element, startIdx, middle - 1);
		}
	}
}





