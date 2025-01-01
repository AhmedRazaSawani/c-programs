# include <stdio.h>
void main ( )
{
FILE * ptr;
FILE *p1;
char ch;
ptr = fopen (“Quote.c”, “w”);
fputs (“knowledge helps you to reach your destination provided you know what your destination
is”, ptr);
fclose (ptr);
ptr = fopen (“Quote.c”, “r”);
p1 = fopen (“new.c”,”w”);
while (!feof (ptr))
{
ch = fgetc (ptr);
fputc (ch, p1);
}
printf(“File is copied”);
fclose (ptr);
fclose (p1);
}
