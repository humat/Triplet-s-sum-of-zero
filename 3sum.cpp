 
#include<bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
	int arr[] = {-1,0,1,2,-1,-4};
	int n = sizeof(arr)/sizeof(arr[0]); 
	sort(arr, arr+n); 

	for (int i=0; i<n-1; i++) 
	{  
		int y = i + 1; 
		int z = n - 1; 
		int x = arr[i]; 
		while (y<z) 
		{ 
			if (x + arr[y] + arr[z] == 0) 
			{ 
				 
				cout<<x<<" "<< arr[y]<<" "<< arr[z]<<endl;
				y++; 
				z--; 
				
			} 
 
			else if (x + arr[y] + arr[z] < 0) 
				y++; 

		 
			else
				z--; 
		} 
	} 
}

