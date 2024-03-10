// C++ program to show Tree Recursion 
#include <iostream> 
using namespace std; 

// Recursive function 
void fun(int n) 
{ 
	if (n > 0) 
	{ 
		cout << " " << n; 
		
		// Calling once 
		fun(n - 1); 
		
		// Calling twice 
		fun(n - 1); 
	} 
} 

// Driver code 
int main() 
{ 
	fun(3); 
	return 0; 
} 

// This code is contributed by shivanisinghss2110
