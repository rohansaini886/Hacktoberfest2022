#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int solsize;
	cout << "Enter number of soldiers: " << endl;
	cin >> solsize;
	int lucky = 0, unlucky = 0;

	for (int i = 0; i < solsize; i++)
	{
		int solwpn;
		cin >> solwpn;
		// for even number of weapons
		if (solwpn % 2 == 0)
			lucky++;
		// For odd number of weapons
		else
			unlucky++;
	}

	if (lucky > unlucky)
		cout << "READY FOR BATTLE" << endl;
	else
		cout << "NOT READY" << endl;

	return 0;
}