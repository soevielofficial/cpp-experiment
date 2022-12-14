#include <iostream>
#include <string>
using namespace std;
int main()
{
	string names[3];
	int counter = 3;
	char response[256];
	cout << "What is the first name? ";
	cin.getline(response, 256);
	names[0] = response;
	cout << "What is the second name? ";
	cin.getline(response, 256);
	names[1] = response;
	cout << "What is the third name? ";
	cin.getline(response, 256);
	names[2] = response;
	cout << endl << "The 3 names you entered are " << endl << endl;
	for (int row = 0; row < counter; row++)
	{
		cout << names[row] << endl;
	}
	return 0;
}