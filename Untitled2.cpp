#include <stdio.h>
#include <stdlib.h>
int main()
{ 
 int a,b;
 
 printf("enter values of a&b");
 
 scanf("%d\n%d",&a,&b);

a=a+b;
b=a-b;
a=a-b;

printf("the swapped values of a and b are ; %d and %d",a,b);

return 0;
}
