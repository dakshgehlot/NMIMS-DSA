#include <iostream>
using namespace std;

int insert_delete(int series[100], int c)
{
	int x, y, i;
	cout<<"Enter element you want to insert ";
	cin>>x;
	series[c]=x;
	cout<<"New array after inserting value "<<x<<endl;
	for(i=0; i<c+1; i++)
	{
		cout<<series[i]<<"	";
	}
	cout<<"\n\nEnter element you want to delete and if you don't want to delete any element then enter a different value.";
	cin>>y;
	cout<<"New array after deleting value "<<y<<endl;
	for(i=0; i<c+1; i++)
	{
		if(series[i]!=y)
		{
			cout<<series[i]<<"	";
		}
	}
}

int main()
{
	int c, i;
	cout<<"Enter number of elements in the array. ";
	cin>>c;
	int series[c+1];
	cout<<"Enter all the elemets of the array. ";
	for(i=0; i<c; i++)
	{
		cin>>series[i];
	}
	insert_delete(series, c);
}