#include <iostream> 
using namespace std; 
void head(int n) 
{ 
	if (n > 0) { 
		head(n - 1); 
		cout << n<<endl; 
	} 
} 

// Driver code 
int main() 
{ 
	int x = 5; 
	head(x); 
	return 0; 
} 


