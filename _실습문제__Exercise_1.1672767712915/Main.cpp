#include <iostream>
using namespace std;

/* Description
   Build a class to compute
   1) GCD (Greatest Common Divisor) and
   2) LCM (Least Common Multiple)
    by taking two unsigned integers as an input
*/
class MyCalculator
{
	//assigns 
	public: 
		void assign(int n1, int n2);
		unsigned int gcd();
		unsigned int lcm();
	
	private:
		unsigned int n1;
		unsigned int n2;
};

	void MyCalculator::assign(int one, int two){
		n1 = one;
		n2 = two;
	}
	// Your code here: Implementation for GCD - gcd()
		unsigned int MyCalculator::gcd()
		{
			if(n2>n1)
			{
			int temp = n2;
			n2 = n1;
			n1 = temp; 
			}
			
			int hcf; 
			
			for (int i = 1; i<= (int)n2; ++i)
			{
				if(n1 % i == 0 && n2% i == 0)
				{
					hcf = i;
				}
			}

			return hcf;
		}

	//lcm

		unsigned int MyCalculator::lcm()
		{
			int max = 1;
			do{
				if(max %n1 == 0 && max % n2 == 0){
				return max;
				break;
			}
			else{
				++max;
			}
			}while(true);
			
		}



// Your code here: Definition of MyCalculator class
// Declare member variables and member functions

// Your code here: Mutator - assign()


// Your code here: Implementation for LCM - lcm()
int main() {

        // Take two integers as an input
        unsigned int m, n;

        cin >> m;
        cin >> n;

        // Create a MyCalculator instance
        MyCalculator cal;
        cal.assign(m, n);
        cout << cal.gcd() << " " << cal.lcm() << endl;
}