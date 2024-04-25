// #include <stdio.h>
// int main () 
// {
// 	int a;
	
// 	scanf("%d",&a);
	
// 	printf((a<18)?"less than 18":"greater than or equal to 18");
		
//     return 0;
// }

#include <stdio.h> 
 
int main ()  
{ 
	int age=24; 
	 
	printf(age<15?"250 %d":age<56?"2000 %d":"1500 %d",age); 
	 
    return 0; 
}