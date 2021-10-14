void pallindrome(void);
void reverse(void);
void sum(void);
void factorial(void);
void bintodec(void);
void prime(void);
void square(void);
void frequency(void);
void str(void);

#include <stdio.h>
#include <conio.h>
#include<math.h>
#include<stdlib.h>
int main()
{

      int choice;
        printf("\n\n\t\t\t\t ************ WELCOME TO THE UNIVERSALS  ************");
        printf("\n\n\n\t  CHOOSE THE OPTION TO PERFORM THE TASK THAT YOU WANT : : -----");

   printf("\n \t 1. CHECK FOR PALLINDROME \n\t 2. CHECK FOR PRIME NUMBER \n\t 3. SUM OF ENTERED INTEGER \n\t 4. REVERSE OF ENTERED INTEGER \n\t 5. STRING OPERARTIONS \n\t 6. FACTORIAL OF GIVEN NUMBER \n\t 7. CONVERT BINARY TO DECIMAL \n\t 8. SQUARE OF ANY NUMBER \n\t 9. FREQUENCY OF NUMBERS IN GIVEN INTEGERS \n\t 10. EXIT\n\n \t\t******************ThankYou For Using ******************\n\n\t\t\n\n Design By Punit Sharma");


 printf("\n option :--- ");
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
                      bintodec();
                      break;
              case 8 :
                      square();
                      break;
               case 9:
                      frequency();
                      break;
               default:
                   printf("\n ThankYou !");

              }

    return 0 ;
}


  void pallindrome(void)
  {
      int n,r,sum=0,temp;

       printf("\n\n\n \t\t ##########     LETS CHECK THE ENTERED NUMBER IS PALLINDROME OR NOT ###########  ");
      printf("\n\n\n\t\t Pallindrome number is an number whose reverse is always equal to original number \n\n");



printf("\n\n NOW ENTER THE INTEGER TO PERFORM : ");
scanf("%d",&n);
temp=n;

while(n>0)
{
r=n%10;
sum=(sum*10)+r;
n=n/10;
}
if(temp==sum)
printf("\n\n\n\t\t\t********* CONGRATULATIONS THIS IS AN PALLINDROME NUMBER *********");

else
printf("\t\t\t OOP's THIS IS NOT AN PALLINDROME NUMBER ");

printf("\n ThankYou For Using.\n\n\n\n");

int ch;
switch(ch){
  case 1:
      return 0 ;
  case 2:
      return main;

}

printf("\n\n\t\t Choose : ");
printf("\n \t\t 1. EXIT");
printf("\n \t\t 2. Again want to perform");

     }



   void prime(void)
  {


  }
 void reverse(void)
  {
      printf("\n\n\n \t\t LETS CHECK THE ENTERED NUMBER IS PALLINDROME OR NOT  ");
      printf("\n\t\t Pallindrome number is an number whose reverse is always equal to orignal number");

  }
 void sum(void)
  {
      printf("\n\n\n \t\t LETS CHECK THE ENTERED NUMBER IS PALLINDROME OR NOT  ");
      printf("\n\t\t Pallindrome number is an number whose reverse is always equal to orignal number");

  }
 void str(void)
  {
      printf("\n\n\n \t\t LETS CHECK THE ENTERED NUMBER IS PALLINDROME OR NOT  ");
      printf("\n\t\t Pallindrome number is an number whose reverse is always equal to orignal number");

  }
 void square(void)
  {
      printf("\n\n\n \t\t LETS CHECK THE ENTERED NUMBER IS PALLINDROME OR NOT  ");
      printf("\n\t\t Pallindrome number is an number whose reverse is always equal to orignal number");

  }
 void frequency(void)
  {
      printf("\n\n\n \t\t LETS CHECK THE ENTERED NUMBER IS PALLINDROME OR NOT  ");
      printf("\n\t\t Pallindrome number is an number whose reverse is always equal to orignal number");

  }
 void bintodec(void)
  {
      printf("\n\n\n \t\t LETS CHECK THE ENTERED NUMBER IS PALLINDROME OR NOT  ");
      printf("\n\t\t Pallindrome number is an number whose reverse is always equal to orignal number");

  }
 void factorial(void)
  {
      printf("\n\n\n \t\t LETS CHECK THE ENTERED NUMBER IS PALLINDROME OR NOT  ");
      printf("\n\t\t Pallindrome number is an number whose reverse is always equal to orignal number");

  }




