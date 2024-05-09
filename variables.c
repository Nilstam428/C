#include<stdio.h>
#include<string.h>

int main()
{
//In this code the emphasis is on variables in c
//defining different variables for user declared values

int num, a;
float pi, b;
double number, c;
char character, d;
char name1[50]="Nilesh", name2[40];

//assignimg values to these created varibales
num=10;
pi=3.14;
number=10.5;
character='A';
//printing the values of the variables
printf("predefined values are for int:%d \n", num);
printf("predefined values are for float:%f \n", pi);
printf("predefined values are for double:%lf \n", number);
printf("predefined values are for character:%c \n", character);
printf("predefined values are for name:%s \n", name1);

printf("\nLet's take input from user also for each type of data type:");

//taking input for each type of the data

printf("\nEnter the value for integer:");
scanf("%d", &a);
printf("Value of int\n%d",a);

printf("\nEnter the value for float:");
scanf("%f", &b);
printf("Value of float\n%f", b);

printf("\nEnter the value for double:");
scanf("%lf", &c);
printf("Value of double\n%lf", c);

printf("\nEnter the value for character:");
scanf(" %c", &d); //Space required 
printf("Value of character\n%c", d);

while ((getchar()) != '\n'); // Clear input buffer

printf("\nEnter the value for string:");
fgets(name2, sizeof(name2), stdin);
printf("Value of string: %s", name2);
return 0;
}