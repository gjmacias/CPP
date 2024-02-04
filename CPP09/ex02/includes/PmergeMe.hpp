#ifndef PMERGEME_HPP_
#define PMERGEME_HPP_

#include <vector>
#include <deque>
#include <algorithm>

class PmergeMe
{
	public:
		template <class T>
		static void process(T &c)
		{
			if (!c.empty())
			{
				fordJohnsonMergeInsertionSort(c, 0, c.size() - 1);
			}
		}
		
	private:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);

		template <class T>
		struct Compare
		{
			const T&	c;
			Compare(const T& set) : c(set) {}
			bool operator()(int a, int b) { return c[a] < c[b]; }
		};

		template <class T>
		static void fordJohnsonMergeInsertionSort(T &c, int startIndex, int endIndex)
		{
			if (startIndex >= endIndex) return ;
		
			if (endIndex - startIndex == 1)
			{
				if (c[startIndex] > c[endIndex])
					std::swap(c[startIndex], c[endIndex]);
				return ;
			}

			std::vector<int> medians;
			
			for (int i = startIndex; i < endIndex; i += 2)
			{
				if (c[i] > c[i + 1]) {
					std::swap(c[i], c[i + 1]);
				}
				medians.push_back(i + 1);
			}
			if ((endIndex - startIndex + 1) % 2 != 0) {
				medians.push_back(endIndex);
			}
			int medianIndex = selectMedian(c, medians);
			int mid = partition(c, startIndex, endIndex, medianIndex);

			fordJohnsonMergeInsertionSort(c, startIndex, mid - 1);
			fordJohnsonMergeInsertionSort(c, mid, endIndex);
		}
		
		template <class T>
		static int partition(T &c, int startIndex, int endIndex, int pivotIndex)
		{
			std::swap(c[pivotIndex], c[endIndex]); // Move pivot to endIndex
			int	storeIndex = startIndex;

			for (int i = startIndex; i < endIndex; i++)
			{
				if (c[i] < c[endIndex])
				{
					std::swap(c[i], c[storeIndex]);
					storeIndex++;
				}
			}
			std::swap(c[storeIndex], c[endIndex]); // Move pivot to its final place
			return (storeIndex);
		}


		template <class T>
		static int selectMedian(T &c, const std::vector<int> &medians)
		{
			std::vector<int>	temp = medians;
			std::sort(temp.begin(), temp.endIndex(), Compare<T>(c));

			return (temp[temp.size() / 2]);
		}
};

#endif