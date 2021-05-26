#include <iostream>

using namespace std;

int check[300000];

int pow(int n, int times)
{
    int answer = 1;
    if (!times)
    {
        return 1;
    }
    while (times--)
    {
        answer *= n;
    }
    return answer;
}

void DFS(int n, int p)
{
    check[n]++;
    if (check[n] > 2)
    {
        return;
    }
    int next = 0;
    while (n)
    {
        next += pow(n % 10, p);
        n /= 10;
    }
    DFS(next, p);
}

int main()
{
    int a, p;
    int count = 0;
    cin >> a >> p;

    DFS(a, p);

    for (int i = 0; i < 300000; i++)
    {
        if (check[i] == 1)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}