#include <iostream>

using namespace std;
int main()
{
	int k = 0;
	cin >> k;

	int n = 1;
	double sum = 1;

	//��sumС��k����������Ҫ���ֵ
	while (sum <= k)
	{
		n++;
		sum += 1.0 / n;
	}

	cout << n;

	return 0;
}