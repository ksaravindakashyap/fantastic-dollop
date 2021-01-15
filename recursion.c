#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>

#define size 10

int i=0;
//-----------------------Fibonacci of N numbers---------------------------------------------
int fib(int i)
{
  if(i==0)
  {
      return 0;
    }
  if(i==1)
  {
      return 1;
    }
  return(fib(i-1)+fib(i-2));
}


//----------------------------------------SUM OF FIRST N NATURAL NUMBERS-------------------------------------------------------
//a program in C to print the SUM OF FIRST N NATURAL NUMBERS using recursion
int natural(int n)
{
  if(n==1)
  {
    return 1;
  }
  return(n+natural(n-1));
}

//a program in C to print first 30 natural numbers using recursion
int print_natural(int n)
{
  if(n<30)
  {
    printf("%d\t",n );
      return(print_natural(n+1));
  }

}


//a program in C to print the array elements using recursion
int array_output(int a[], int x, int l)
{
  if(x>=l)
        return 1;
printf("\n array elements%d",a[x]);
return(array_output(a,x+1,l));

}


//a program in C to count the digits of a given number using recursion
int count(int n, int counter)
{
  int x,y;
  if(n!=0)
  {
    x = n%10;
   y = n/10;
   n = y;
   counter++;
   return(count(n,counter));
  }
  printf("The number of digits ->%d",counter);
}

//a program in C to find the sum of digits of a number using recursion
int sum_count(int n,int g)
{
  int x,y;
  if(n!=0)
  {
   x = n%10;
   y = n/10;
   n = y;
   g += x;
   return(sum_count(n,g));
  }
 printf("The number of digits ->%d",g);
}

//----------------------------GCD OF TWO NUMBERS----------------------//
// A c program to find gcd of two numbers using recursion

int gcd(int number1, int number2)
{
  if(number1!=number2)
  {
    if(number1>number2)
        return(gcd(number1-number2,number2));
    else
        return(gcd(number1,number2-number1));
  }
  else
  return number1;
}

//-----------------------reverse string----------------------
char* reverse(char str1[])
{
    static int i=0;
    static char revstr[size];
    if(*str1)
    {
         reverse(str1+1);
         revstr[i++] = *str1;
    }
    return revstr;
}

int main()
{
  int n,choice,i,y,counter,f,t=2,string_len,number1,number2,gcd_number;
  int a[size],s[5];
  char str1[size],*revstr;
  while(1)
  {
  printf("\n1.Sumofnatural\n2.printnatural\n3.array\n4.counter\n5.sum_count\n6.fibonacci\n7.reverse\n8.gcd\n9.exit\n enter the choice");
  scanf("%d",&choice);
  switch (choice) {
    case 1:  printf("\n enter the number");
            scanf("%d",&n);
            printf("the sum of first %d natural number is %d",n,natural(n));
            break;
    case 2: printf("\n enter the number");
            scanf("%d",&n);
            printf("%d",print_natural(n));
            break;
    case 3:    printf(" Input the number of elements to be stored in the array :");
            scanf("%d",&y);
            for(i=0;i<y;i++)
              {
                printf("\n enter array elements");
                scanf("%d",&a[i]);
              }
              array_output(a,0,y);
            break;
    case 4: printf("\n enter the number");
            scanf("%d",&n);
            count(n,0);
            break;
    case 5:printf("\n enter the number");
            scanf("%d",&n);
            sum_count(n,0);
            break;
    case 6: printf("\n enter the value of n");
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
              f = fib(i);
              printf("\t%d",f);
            }
            break;
    case 7 :    printf(" Input any string: ");
                scanf("%s",str1);
                revstr = reverse(str1);
                printf(" The reversed string is: %s\n\n",revstr);
              break;
    case 8: printf("\n enter the values of number1 and number2");
            scanf("%d%d",&number1,&number2);
            gcd_number = gcd(number1,number2);
            printf("%d and %d is ->%d",number1,number2,gcd_number);
            break;
    case 9 :exit(0);
            break;
    default:printf("\ninvalid choice");
  }
  }
  return 0;
}
