#include <iostream>
#include <string>
#include <stack>

int main()
{
	std::string s;
	std::stack<char> st;
	std::string temp;
	std::cin >> s;

	for (const auto& c : s)
	{
		if (c == 'P'&& !st.empty() && st.top() == 'A')
		{
			std::string temp{ c };
			while (!st.empty() && temp.length() < 4)
			{
				temp = st.top() + temp;
				st.pop();
			}
			if (temp == "PPAP")
			{
				st.push(c);
			}
			else
			{
				for (const auto t : temp)
				{
					st.push(t);
				}
			}
		}
		else
		{
			st.push(c);
		}
	}
	if (st.size() == 1 && st.top() == 'P')
	{
		std::cout << "PPAP" << '\n';
	}
	else
	{
		std::cout << "NP" << '\n';
	}
	
	return 0;
}


// 참고 : 이렇게 단순 문자열 파싱으로 풀면 시간복잡도가 O(N^2)이라 시간초과 납니다.
//int main()
//{
//	const std::string PPAP = "PPAP";
//	std::string s = "";
//
//	std::cin >> s;
//
//	while (s.find(PPAP) != std::string::npos)
//	{
//		auto index = s.find(PPAP);
//		s = s.substr(0, index) + "P" + (s.length() > 4 ? s.substr(index + 4) : "");
//	}
//	std::cout << (s == "P" ? "PPAP" : "NP") << '\n';
//
//	return 0;
//}