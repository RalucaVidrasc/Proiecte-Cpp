#include <iostream>
using namespace std;
int a[100],n;
void sortare(int a[],int c,int d)
{
     int m,i,j;
     for(i=c;i<d;i++)
     {
      m=a[i];
      j=i;
      while(j>0 && a[j-1]>m)
      {
          a[j]=a[j-1];
          j--;
      }
      a[j]=m;
    }

}
void Merge(int s,int m,int d)
{
	int b[100];
	int bi;
	bi=s;

	int i,j;

	i=s;
	j=m+1;

	while(i<=m && j<=d)
	{
    	if(a[i]<=a[j]){
        	b[bi]=a[i];
        	i++;
    	}else{
        	b[bi]=a[j];
        	j++;
    	}
    	bi++;
	}

	int k;

	if(i>m)
	{
    	for(k=j;k<=d;k++)
    	{
        	b[bi]=a[k];
        	bi++;
    	}

	}else{
    	for(k=i;k<=m;k++){
        	b[bi]=a[k];
        	bi++;
    	}
	}
	for(k=s;k<=d;k++)
    	a[k]=b[k];
}
void MergeSort(int s,int d)
{
	int m;
	if(d-s>10)
        sortare(a,s,d);
	if(s<d)
	{
    	m=(s+d)/2;
    	MergeSort(s,m);
    	MergeSort(m+1,d);
    	Merge(s,m,d);
	}
}
int main()
{
	cout<<"n=";cin>>n;
	for(int i=0;i<n;i++)
    {
        cout<<"a["<<i+1<<"]=";
        cin>>a[i];
    }
	MergeSort(0,n-1);
	for(int i=0;i<n;i++)
    	cout<<a[i]<<" ";
    	
    system("PAUSE");	
	return 0;
}
