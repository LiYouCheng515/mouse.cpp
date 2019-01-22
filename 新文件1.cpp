#include<iostream>
#include<math.h>
using namespace std;
bool is_prime(int);

int main(){
	int n;
	cin >> n;
	cout << endl;
	if (n == 2)
	{
	cout << "prime" <<endl; 
	}
	
	if (is_prime(n))
	cout <<"prime"<< endl;
	else
	cout <<"no"<< endl;
	
	return 0;

}

bool is_prime(int n)
{
	int count = 2;
	while(count<n )
	{
		if (n%count==0)
		{
			cout <<count<< endl;

			return true;
		}	
		count++;
	}
	return false;
	
}

