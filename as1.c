//wap to find largest and smallest eliment in the list
#include<stdio.h>
void main()
{
	int a[50],i,l,s,n;
	printf("Enter The size of and array: ");
	scanf("%d",&n);
	printf("Enter The Elements of the array ");
	for(i=0;i<=n;i++)
	{
	scanf("%d",&a[i]);
	
	
	}
	printf("The array is:- ");
	for(i=1;i<=n;i++)
	printf("%d",a[i]);
	 
	l =a[1];
	for(i=1;i<=n;i++)
	{
	if(a[i]>l)
	l=a[i];
		
		
	
	{
	printf("\nLargest Element is:- %d ",l);
	s=a[i];
	for(i=1;i<=n;i++)
	{
	if(a[i]<s)
	s=a[i];
	}
	printf("\nSmallest Element is:-%d \n",s);
}
}
}
		

	
	


