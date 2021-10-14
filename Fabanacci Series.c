int main()
{

    int a=0,b=1,i;
    int n ;
    printf("\n enter the number of elements : ");
    scanf("%d",&n);
    printf("\n%d\t%d\t" , a,b);


    for(i=2;i<n ; i++)
    {
        int c = a + b;
         printf("%d\t",c);
         a = b ;
         b = c ;

    }


    return 0 ;
}
