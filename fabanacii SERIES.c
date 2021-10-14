
int fab(int);
int main()
{

    int  n  ;
    printf("\n ENTER THE NUMBER OF TERMS : ");
    scanf("%d",&n);
    printf("\n Fabanacii sequences are :");

int k ;
 k = fab(n);

printf("\n\n\n\n\n\n\n\n\n");
    return 0 ;
}


int fab(int n )
{
int i ,  n1=0,n2=1,n3;

     printf("%d\t%d\t",n1,n2);
    for(i=2;i<=n;i++)
{

    n3 = n1+n2;
    printf("%d\t",n3);

    n1 = n2;
    n2 = n3;

}

}
