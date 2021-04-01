#include <iostream>
#include <string>
#include <queue>
#include <vector>


int main()
{
	std::vector<std::queue<int>> bucket(21);
	int n, k;
	uint64_t friendCount = 0;
	std::cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		std::string temp;
		std::cin >> temp;
		while (!bucket[temp.length()].empty() && i - bucket[temp.length()].front() > k)
		{
			bucket[temp.length()].pop();
		}
		friendCount += bucket[temp.length()].size();
		bucket[temp.length()].push(i);
	}
	std::cout << friendCount;

	return 0;
}