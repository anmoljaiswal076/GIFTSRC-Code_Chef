#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	if(t>=1 && t<=100)
	{
	while(t--)
	{
		int n;
		cin>>n;
		if(n>=1 && n<=1000)
		{
		char a[n+1];
		int x=0,y=0;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			
		}
		for(int i=0;i<n; i++)
		{
			if(a[i] == 'L')
			{
				if(a[i-1]!='L' && a[i-1]!='R')
				x-=1;
			}
			else if(a[i] == 'R')
			{
				if(a[i-1]!='R' && a[i-1]!='L')
				x+=1;
			}
			else if(a[i] == 'U')
			{ 
				if(a[i-1]!='U' && a[i-1]!='D')
				y+=1;
			}
			else if(a[i] == 'D')
			{
				if(a[i-1]!='D' && a[i-1]!='U')
				y-=1;
			}
		}
		cout<<x<<" "<<y<<endl;
		}
	}
	}
}
