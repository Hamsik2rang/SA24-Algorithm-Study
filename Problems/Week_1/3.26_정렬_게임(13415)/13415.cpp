#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

int main()
{
	std::deque<std::pair<int, bool>> setQ;
	int n, k;
	std::cin >> n;
	std::vector<int> v(n);

	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
	}

	std::cin >> k;

	for (int i = 0; i < 2 * k; i++)
	{
		//If Order is Descending than second of pair is true, Else than false.
		std::pair<int, bool> order(0, static_cast<bool>(i % 2));
		std::cin >> order.first;

		while (!setQ.empty() && setQ.back().first <= order.first)
		{
			setQ.pop_back();
		}
		setQ.push_back(order);
	}

	int descendingIndex = setQ.front().first;	

	std::vector<int> answer(v.begin(), v.end());
	std::sort(v.begin(), v.begin() + descendingIndex, std::less<>());

	descendingIndex--;
	int front = 0;
	int back = descendingIndex;

	while (!setQ.empty())
	{
		auto curOrder = setQ.front();
		setQ.pop_front();
		auto count = setQ.empty() ? curOrder.first : curOrder.first - setQ.front().first;

		// Descending Order
		if (curOrder.second)
		{
			for (int i = 0; i < count; i++)
			{
				answer[descendingIndex--] = v[front++];
			}
		}
		// Ascending Order
		else
		{
			for (int i = 0; i < count; i++)
			{
				answer[descendingIndex--] = v[back--];
			}
		}
	}

	for (const auto& i : answer)
	{
		std::cout << i << ' ';
	}

	return 0;
}