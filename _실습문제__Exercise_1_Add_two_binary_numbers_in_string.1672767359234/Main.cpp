#include <iostream>
using namespace std;


string AddBinary(string a, string b)
{
	string result = "";
	int s = 0;
	
	int num1 = a.length() - 1;
	int num2 = b.length() - 1;
	while (num1 >= 0 || num2 >= 0 || s == 1)
	{ 
		s += ((num1 >= 0) ? a[num1] - '0' : 0);
		s += ((num2 >= 0) ? b[num2] - '0' : 0);
		result = (char)(s % 2 + '0') + result;

		s /= 2;
		num1--;
		num2--;
	}
	return result;
}

int main()
{
	  // x = "1111", y="110"; -> result: "10101"
    string x,y;
		cout << "x=";
	  cin >> x;
	  cout << "y=";
	  cin >> y;
    cout << AddBinary(x, y) << endl;
    return 0;

}