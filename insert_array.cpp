// Write a program that asks for an index and a number.
// Then it includes the number at the indicated index of the array = {1,2,3,4,5,6}
// and moves a position forward (from u to u+1) each element after the selected index.

#include <iostream>
using namespace std;

int main()
{
	int arr[] = {1,2,3,4,5,6} ;
	int i, x, pos, n = 6;
	cout<<"enter the position at which you want to insert the number"<<endl;
	cin>>pos;
	cout<<"enter the number you want to insert"<<endl;
	cin>>x;
	n++;
	for (i = n; i >= pos; i--)
		arr[i] = arr[i - 1];

	arr[pos - 1] = x;

	for (i = 0; i < n+1; i++)
		cout<<arr[i]<<" ";
	cout<<"\n";

	return 0;
}

