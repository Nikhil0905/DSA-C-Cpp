#include <stdio.h>

int main() {

int date,month,year;

printf("Date u want: ");

scanf("%d %d %d",&date,&month,&year);

printf("%02d/%02d/%d\n",date,month,year);

printf("%4d",year);    // If number is less than 4 digit it will print the remaining as spaces in front of number. 

return 0;
}