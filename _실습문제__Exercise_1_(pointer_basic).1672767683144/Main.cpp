#include <iostream>
using namespace std;

void inverse(int& src)
{
	int *number = &src;
	*number *= -1;
}

void increase(int& src)
	{
		int *num = &src;
	*num += 1;
	}
int main(){
	int src;
	cout << "input integer : ";
	cin >> src;
	increase(src);
	cout << src << endl;
	inverse(src);
	cout << src << endl;
	return 0;
}