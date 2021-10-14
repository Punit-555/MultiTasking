#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a[100],i ;
	  int even=0,odd=0;
	scanf("%d",&n);

	for(i=0;i<=n;i++)
	{
	    scanf("%d",&a[i]);


	    if(a[i]%2==0)
	    {
	     even++;
	    }
	    if(a[i]%3==0)
	    {
	        odd++;
	    }
 if(even>odd)
	    {
	        printf("\n even is : %d",even);
	        printf("READY FOR BATTLE");
	    }
    else
	    {
	        printf("\n odd is : %d",odd);
	        printf("\n NOT READY");
	    }



	}




	return 0;
}

