#include <iostream>
#include <string>
using namespace std;

int main()
{
  string name;
  string className;
  int id;

//write your code here
cin>> id;
char skip;
do
{
	cin.get(skip);
}
while(skip != '\n');
getline(cin, name, ':');
getline(cin, className);

cout << "Hello " << className << " my name is " << name << ". my ID is " << id << endl;
return 0;
}