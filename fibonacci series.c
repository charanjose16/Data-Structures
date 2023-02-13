#include <stdio.h>

int main()
{
   	int num, t1=0,t2=1,nextterm;
	printf("Enter the number of terms: ");
    scanf("%d", &num);
    printf(" fibonacci series:");
    for(int i=1;i<=num;i++){
	if(i==1)
	{
		printf("%d ",t1);
		continue;
	}
	if(i==2)
	{
		printf("%d ",t2);
		continue;
	}
	else
	{
		nextterm=t1+t2;
		t1=t2;
		t2=nextterm;
		printf("%d ",nextterm);
		continue;
	}
}

    return 0;
}
