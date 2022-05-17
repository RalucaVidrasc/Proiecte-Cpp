#include<iostream>
#include<fstream>

using namespace std;

ifstream fcin("ImagineDigitala.in");

int a[100][100];
int main()
{
	int n,i,j,k=1;
	
	fcin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			fcin>>a[i][j];
	if(a[1][1]==1)a[1][1]=++k;
	
	for(i=2;i<=n;i++)
		if(a[1][i]==1)
				if(a[1][i-1]!=0)
					a[1][i]=a[1][i-1];
				else a[1][i]=++k;
				
	for(i=2;i<=n;i++)
		for(j=1;j<=n;j++)
			if(a[i][j]==1)
				if(a[i-1][j]!=0)a[i][j]=a[i-1][j];
				else if(a[i][j-1]!=0)a[i][j]=a[i][j-1];
				else a[i][j]=++k;
				
	for(i=n;i>=1;i--)
		for(j=n;j>=1;j--)
			if(a[i][j]!=0 && a[i+1][j]!=0 && a[i+1][j]<a[i][j])
				a[i][j]=a[i+1][j];
			else if(a[i][j]!=0 && a[i][j+1]!=0 && a[i][j+1]<a[i][j])
				a[i][j]=a[i][j+1];
			
			
	// colorare consecutiva
		
	k=0;
	int p=2;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			if(a[i][j]!=0 && p<a[i][j])
			{
				k+=a[i][j]-p-1;
				p=a[i][j];
			}
			if(a[i][j]!=0)
				{
					a[i][j]-=k;
					if(a[i-1][j]>a[i][j] )a[i][j]=a[i-1][j];
						else if(a[i][j-1]>a[i][j] ) a[i][j]=a[i][j-1];
			}
		}
				
		
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			cout<<a[i][j]<<" ";
		cout<<"\n";
	}
	
	fcin.close();	
	system("PAUSE");
	return 0;
}
