// CPP program to demonstrate the 
// array::data() function 
#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	array<int, 5> arr = { 1, 2, 3, 4, 5 }; 

	// prints the array elements 
	cout << "The array elements are: "; 
	for (auto it = arr.begin(); it != arr.end(); it++) 
		cout << *it << " "; 

	// Points to the first element 
	auto it = arr.data(); 

	// increment 
	it++; 
	cout << "\nThe second element is: " << *it; 

	// increment 
	it++; 
	cout << "\nThe third element is: " << *it; 

	return 0; 
} 
