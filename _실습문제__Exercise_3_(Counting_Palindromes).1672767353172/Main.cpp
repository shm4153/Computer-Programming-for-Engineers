#include <iostream>
using namespace std;

bool isPalindrome(int n) // checks number is equal by original versus the reversed number
{
   int rev= 0;
   for (int i = n; i > 0; i /= 10) 
	 {
		 rev = rev*10 + i%10; 
	 }
   if (n==rev){
		 return 1;
	 }
	else{
		return 0;
	}
}
 
int countPalindrome(int min, int max) // counts palindrome numbers between two min and max numbers
{
	int counter=0;
	for(int i= min; i<= max; i++){
		if(isPalindrome(i)){
			counter++;
		}
	}
	return counter;
} //understand why it prints out 0 before everything else 

 
// Main program for testing
int main()
{
    /* 
		Write your code here to take two integer inputs
		You should consider two cases:
		  - What if min >= max?
			- What if an integer is out of range?
		*/
	
	//gets user to input two intergers (min and max range)
	  int a, b;

	//returns value inputed for a when integer b ranges as a good value for max and is palindrome
		cout<<"Min: ";
		cin >> a; //saves minimum number of range from user

	//returns value inputed for b when integer b ranges as a good value for max and is palindrome
		cout<<"Max: ";
		cin >> b; //saves maximum number of range from user
	
	//checks that min and max numbers are in range
		if((a<0)||(b<0)||(a>2147483647)||(b>2147483647))
		{
			printf("Error: out of range");
			exit(0);
    }

	//returns error warning when min value is bigger than max value
		if(a>= b)
		{
			cout<<"Error: min>=max"<<endl;
			exit(0);
		}
		
		int num_palindrome = countPalindrome(a,b);
		cout<<num_palindrome <<endl;
	
		return 0; 
}