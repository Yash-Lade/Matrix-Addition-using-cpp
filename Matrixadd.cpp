#include<iostream>
using namespace std;

int main()
{
	int a[4][4],b[4][4],c[4][4],i,j,k;
	cout<<"\n@Author - Yash Lade\n";
	
	cout<<"\nEnter the elements in first matrix :\n";
	
	for(i=1;i<=3;i++)
	 {
	 	for(j=1;j<=3;j++)
	 	 cin>>a[i][j];
	 }
	
	cout<<"\nEnter the elements in second matrix :\n";
	 
	for(i=1;i<=3;i++)
	 {
	 	for(j=1;j<=3;j++)
	 	 cin>>b[i][j];
	 }
	 
	for(i=1;i<=3;i++)
	 {
	 	for(j=1;j<=3;j++)
	 	{
		  c[i][j]=0;
	 	 
	 	 for(k=1;k<=3;k++)
	 	 
	 	 c[i][j]=a[i][j]+b[i][j];
	    }
	 }
	cout<<"\nThe addition of two matrix is :\n ";
	for(i=1;i<=3;i++)
	 {
	 	for(j=1;j<=3;j++)
	 	 cout<<c[i][j]<<"\t";
	 	 cout<<"\n";
	 }
}
