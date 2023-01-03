#include <iostream>
using namespace std;

int main()
{
	int seconds, h, m,s;
	cin >> seconds;
	h = seconds/3600; //saves the hours that the total seconds make as hours
	seconds = seconds%3600; // saves the remainder of seconds after taking hours
	m = seconds/60; // saves the seconds that makes total minutes as int numbers
	s = seconds%60; //saves remainder seconds after taking hours and seconds
	cout<<"input time: it's "<<h<<"h "<<m<<"m "<<s<<"s."; //prints out the hours, minutes, and seconds total seconds are equal to like a timer clock
	
	return 0;
}