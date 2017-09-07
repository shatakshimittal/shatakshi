/*....NAME     - Shatakshi Agarwal
	  SEC      - B
	  ROLL NO. - 87.....*/
/*.....LINEAR SEARCH.....*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10], i, num,t, n, c=0;
	printf("Enter number of test cases : ");
	scanf("%d",&t);
	while(t!=0)
	{
		printf("Enter the array size : ");
		scanf("%d",&n);
		printf("Enter Array Elements : ");
		for(i=0; i<n; i++)
		{
			scanf("%d",&arr[i]);
		}
		printf("Enter number to be search : ");
		scanf("%d",&num);
		for(i=0; i<n; i++)
		{
			if(arr[i]==num)
			{
				c=1;
				break;
			}
		}
		if(c==1)
		{
			printf("Not Present\nNumber of comparison %d\n\n",i+1);
		}
		else
		{
			printf("Present\nNumber of comparison %d\n\n",n);
		}
		t--;
    }
return 0;
}
