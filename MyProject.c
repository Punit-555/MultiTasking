

                                             // Puneet Sharma  //



void pallindrome(void);
void reverse(void);
void sum(void);
void factorial(void);
void oddeven(void);
void prime(void);
void Power(void);
void fabonacci(void);
void str(void);
void bin(void);
void concatenation(void);
void reverse(void);
void length(void);

#include <stdio.h>
#include <conio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
      int choice;
        printf("\n\n\t\t\t\t\t ************ WELCOME TO THE UNIVERSALS----A MULTITASKING PROGRAME  ************");
        printf("\n\n\n\t  CHOOSE THE OPTION TO PERFORM THE TASK THAT YOU WANT : : -----");

   printf("\n \t 1. CHECK FOR PALLINDROME \n\t 2. CHECK FOR PRIME NUMBER \n\t 3. SUM OF ENTERED INTEGER \n\t 4. REVERSE OF ENTERED INTEGER \n\t 5. STRING OPERARTIONS \n\t 6. FACTORIAL OF GIVEN NUMBER \n\t 7. CHECK EVEN OR ODD \n\t 8. POWER OF ANY NUMBER \n\t 9. FABANOACCI  SERIES  \n\t 10.CONVERSION OF DECIMAL TO BINARY \n\t\t 11. EXIT\n\n \t\t\t******************   ThankYou For Using  ******************\n\n\t\t\n\n\t\t\t\t\t Design By Punit Sharma");


 printf("\n\n\n ENTER THE OPTION  :--- ");
    scanf("%d",&choice);
     system("cls");

              switch(choice)
              {
              case 1:
                   pallindrome();
                      break;
                      main();
              case 2:
                      prime();
                      break;
              case 3 :
                      sum();
                      break;
              case 4 :
                      reverse();
                      break;
              case 5 :
                      str();
                      break;
              case 6 :
                      factorial();
                      break;
              case 7 :
                      evenodd();
                      break;
              case 8 :
                      Power();
                      break;
               case 9:
                      fabonacci();
                      break;
                       case 10:
                      bin();
                      break;
               default:
                   printf("\n ThankYou !");

              }

    return 0 ;
}


                                         /** Pallindrome case 1 */

  void pallindrome(void)
  {
      int n,r,sum=0,temp;

      printf("\n \t\t ****** WELCOME TO THE UNIVERSALS ******\n");
       printf("\n\n\n \t\t ##########     LETS CHECK THE ENTERED NUMBER IS PALLINDROME OR NOT ###########  ");
      printf("\n\n\n\t\t Pallindrome number is an number whose reverse is always equal to original number \n\n");



printf("\n\n NOW ENTER THE INTEGER TO PERFORM : ");
scanf("%d",&n);
temp=n;

while(n!=0)
{
r=n%10;
sum=(sum*10)+r;
n=n/10;
}
if(temp==sum)
printf("\n\n\n\t\t\t********* CONGRATULATIONS THIS IS AN PALLINDROME NUMBER *********");

else
printf("\n\t\t\t OOP's THIS IS NOT AN PALLINDROME NUMBER ");

printf("\n ThankYou For Using.\n\n\n\n");

int ch;
printf("\n\n\t\t Choose : ");
printf("\n \t\t 1. EXIT");
printf("\n \t\t 2. Again want to perform.\n\n");
scanf("\n\n\t\t%d",&ch);

switch(ch)
{
 case 1:
     exit (0);
  case 2:
      return main();

}
system("cls");
     }

                                          /** Prime Number */

   void prime(void)
  {
printf("\n\n\t\t *********** LET'S CHECK THE NUMBER IS PRIME OR NOT ******************");

int n,i,m=0,flag=0;
printf("\n ENTER THE NUMBER TO CHECK  : ");
scanf("%d",&n);
m=n/2;
for(i=2;i<=m;i++)
{
if(n%i==0)
{
printf("Number is not prime");
flag=1;
break;
}
}
if(flag==0)
printf("Number is prime");

  }



                                              /** Reverse of the number */

 void reverse(void)
  {
      int  n ;

       int r,rev=0;
      printf("\n\n\n \t\t  ************ LETS REVERSE THE ENTERED NUMBER  *************** ");
      printf("\n\t\t ENTER THE NUMBER : ");
      scanf("%d",&n);

      while(n!=0)
      {

          r = n%10;
          rev = (rev*10) + r;
          n = n/10;

      }

      printf("\n\n\n\n\t\t NOW THE REVERSE OF THE GIVEN NUMBER ::--  %d\n\n" ,n,rev);

  printf("\n ThankYou For Using.\n\n\n\n");
int ch;
printf("\n\n\t\t Choose : ");
printf("\n \t\t 1. EXIT");
printf("\n \t\t 2. Again want to perform.\n\n");
scanf("\n\n\t\t%d",&ch);

switch(ch)
{
 case 1:
     exit (0);
  case 2:
      return main();

}




  }

                                                /** sum of the number */

 void sum(void)
  {
      int  n ,sum=0;
      printf("\n\n\n \t\t LETS SUM THE ENTERED INTEGER NUMBER  ");
      printf("\n ENTER THE NUMBER : ");
      scanf("%d",&n);

     while(n!=0)
     {
         int r;
         r = n%10;
         sum = sum+r;
         n = n/10;

     }
     printf("\n NOW THE SUM OF ENTERED NUMBER IS :%d",sum);

      printf("\n ThankYou For Using.\n\n\n\n");
int ch;
printf("\n\n\t\t Choose : ");
printf("\n \t\t 1. EXIT");
printf("\n \t\t 2. Again want to perform.\n\n");
scanf("\n\n\t\t%d",&ch);

switch(ch)
{
 case 1:
     exit (0);
  case 2:
      return main();

}
system("cls");

                                /** STRING-OPERATIONS **/

  }
 void str(void)
  {
      char str1[20],str2[20];
      printf("\n\n\n \t\t LETS OPERATE WITH STRING : :  ");

       printf("\n ENTER THE STRING YOU WANT TO PERFORM : ");
       scanf("%s",&str1);
       printf("\n SECOND STRING : ");
       scanf("%s",&str2);


    strcat(str1,str2);
       printf("\n AFTER THE CONCATENATION OF THE STRINGS ARE : : : %s",str1);

       printf("\n \n LENGTH OF THE STRINGs IS : %d  & %d",strlen(str1) , strlen(str2));
 printf("\n ThankYou For Using.\n\n\n\n");

int ch;
printf("\n\n\t\t Choose : ");
printf("\n \t\t 1. EXIT");
printf("\n \t\t 2. Again want to perform.\n\n");
scanf("\n\n\t\t%d",&ch);

switch(ch)
{
 case 1:
     exit (0);
  case 2:
      return main();

}
system("cls");



                                   /** POWER OF THE FUNCTION **/

  }
 void Power(void)
  {
      int n ,p;
      printf("\n\n\n \t\t LETS FIND THE SQUAREROOT  OF ANY NUMBER : : --  ");
      printf("\n ENTER THE NUMBER  :   ");
      scanf("%d",&n );
      printf("\n POWER RAISED TO THAT : ");
      scanf("%d",&p);
int result = pow(n,p);
     printf("\n SQUARE ROOT OF  : %d , OF POWER : %d  IS : -- : %d",n,p,result);
   printf("\n ThankYou For Using.\n\n\n\n");

int ch;
printf("\n\n\t\t Choose : ");
printf("\n \t\t 1. EXIT");
printf("\n \t\t 2. Again want to perform.\n\n");
scanf("\n\n\t\t%d",&ch);

switch(ch)
{
 case 1:
     exit (0);
  case 2:
      return main();

}
system("cls");

                         /** FABANACCCI NUMBER */
  }
 void fabonacci(void)
  {

    printf("\n\t\t ********************* LET'S CREATE A FABANACCI SEQUENCE SERIES ******************* \n\n");
    int n,n1=0,n2=1,n3;

    printf("\n ENTER THE NUMBER OF TERMS THAT YOU WANT :  :");
    scanf("%d",&n);
    printf("%d\t%d\t",n1,n2);


   for(int i=2;i<=n;i++)
   {

       n3 = n1+n2;
       printf("%d\t",n3);
        n1 = n2;
       n2 = n3;
   }

printf("\n\n\n");


      printf("\n ThankYou For Using.\n\n\n\n");

int ch;
printf("\n\n\t\t Choose : ");
printf("\n \t\t 1. EXIT");
printf("\n \t\t 2. Again want to perform.\n\n");
scanf("\n\n\t\t%d",&ch);

switch(ch)
{
 case 1:
     exit (0);
  case 2:
      return main();

}

  }

                           /** EVEN ODD FUNCTION **/


 void evenodd(void)
  {
      int  n ;
            printf("\n \t\t ****** WELCOME TO THE UNIVERSALS ******\n");
      printf("\n\n\n \t\t LETS CHECK THE ENTERED NUMBER IS EVEN  OR ODD. ::-- ");

      printf("\n ENTER THE NUMBER : ");
      scanf("%d",&n);
      if(n%2==0)
      {
          printf("\n\n NUMBER IS EVEN");
      }
      else if(n%3==0)
      {
          printf("\n \n NUMBER IS ODD");
      }
      else
      {
          printf("\n INVALID DATA");
      }

      printf("\n ThankYou For Using.\n\n\n\n");

int ch;
printf("\n\n\t\t Choose : ");
printf("\n \t\t 1. EXIT");
printf("\n \t\t 2. Again want to perform.\n\n");
scanf("\n\n\t\t%d",&ch);

switch(ch)
{
 case 1:
     exit (0);
  case 2:
      return main();

}
system("cls");

  }

                      /** FACTORIAL OF GIVEN NUMBER **/


 void factorial(void)
  {
      int n , fact=1,i;
      printf("\n\n\n \t\t LETS CACLUATE  THE FACTORIAL OF ENTERED NUMBER :  :  ");


      printf("\n ENTER THE NUMBER : :  ");
      scanf("%d",&n);
      for(i=2;i<=n;i++){

        fact =fact*i;


      }
      printf("\n FACTORIAL OF ENTERED NUMBER IS  : : %d",fact);
  printf("\n ThankYou For Using.\n\n\n\n");

int ch;
printf("\n\n\t\t Choose : ");
printf("\n \t\t 1. EXIT");
printf("\n \t\t 2. Again want to perform.\n\n");
scanf("\n\n\t\t%d",&ch);

switch(ch)
{
 case 1:
     exit (0);
  case 2:
      return main();

}
system("cls");


  }



