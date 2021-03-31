#include <iostream>
#include <string>
#include <deque>
#include <algorithm>

int main()
{
	std::deque<uint16_t> dq;
	std::deque<uint16_t> searchElem;
	int n, m;
	int count = 0;
	std::cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		dq.push_back(i);
	}

	for (int i = 0; i < m; i++)
	{
		uint16_t temp;
		std::cin >> temp;
		searchElem.push_back(temp);
	}

	while (!searchElem.empty())
	{
		auto target = searchElem.front();
		searchElem.pop_front();
		auto targetIndex = std::find(dq.begin(), dq.end(), target) - dq.begin();
		if (targetIndex < dq.size() - targetIndex)
		{
			while (dq.front() != target)
			{
				dq.push_back(dq.front());
				dq.pop_front();
				count++;
			}
			dq.pop_front();
		}
		else
		{
			while (dq.front() != target)
			{
				dq.push_front(dq.back());
				dq.pop_back();
				count++;
			}
			dq.pop_front();
		}
	}
	std::cout << count;

	return 0;
}