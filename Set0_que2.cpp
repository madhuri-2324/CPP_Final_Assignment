/************************************************************************************************************************************************************************

Q2: The given code has a base class charInput, it has member methods add() and getvalue(). The class numInput inherits charInput. You need to implement:
add(): it should be inside charInput, this adds the given character to the current value getValue(): it should be inside numInput, it returns the current value
add(): it should be inside numInput, this must override the base class method so that each non-numeric char is ignored.

**************************************************************************************************************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;
class charInput
{
	public:
	char var;
	void add(char c) 
	{ 
		var = var + c;
		cout << "var: " << var << endl;	
	}
	string getValue() 
	{ 
		return NULL; 
	}
};

class numInput : public charInput 
{ 
	public:
		int var=0;
		void add(int n) 
		{
		    cout << "before: " << n << endl;
			n = n - '0';
			if(n >= 0 && n <= 9)	
				n = n*10 + n;
		}
		int getValue()
		{
			return var;
		}
};
int main()
{
	charInput* in = new charInput();
	numInput* inN = new numInput();
	inN->add('1');
	inN->add('a');
	inN->add('0');
	inN->add('b');
	inN->add('4');
	cout << inN->getValue() << endl;
	return 0;
}