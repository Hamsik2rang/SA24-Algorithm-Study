#include <iostream>
#include <vector>
#include <utility>

int main()
{
	int n;
	std::cin >> n;
	std::vector<std::pair<int, int>> people(n);

	for (auto& elem : people)
	{
		std::cin >> elem.first >> elem.second;
	}

	for (int i = 0; i < n; i++)
	{
		int rank = 1;
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				continue;
			}
			else if (people[i].first < people[j].first && people[i].second < people[j].second)
			{
				rank++;
			}
		}
		std::cout << rank << ' ';
	}

	return 0;
}