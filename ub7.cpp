#include <stdio.h> 
#include <stdlib.h> 
int main(void)
{

	int n,i,sum=0;
	
		printf("----秀出1+2+....+n的總和----\n"); 
		printf("請輸入n值為："); 
		scanf("%d",&n);
		
			for(i=1;i<=n;i++)
	sum+=i;
	printf("1+2+3+...+n=%d\n",sum);

		
	

	system("pause");   
	return 0;   
	} 
	


	
