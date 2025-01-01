# include <stdio.h>
void main ( )
{
long int num1, num2, Nr, Dr;
long int GCD, LCM, rem;
printf (“Enter two number: \n”);
scanf (“%ld %ld”, &num1, &num2);
if (num1 > num2)
{Nr = num1;
Dr = num2;}
else
{
Nr = num2;
Dr = num1;}
rem = Nr % Dr;
while (rem! = 0)
{
Nr = Dr;
Dr = rem;
rem = Nr % Dr;}
GCD = Dr;
LCM = num1 * num2 / GCD;
printf (“GCD = %ld \n LCM = %ld\n”, GCD, LCM);
}
