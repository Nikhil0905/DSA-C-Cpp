#include<stdio.h>

int main(){
    auto int i =1;
    {
    auto int i =2;
    {
    auto int i =3;                            //AUTO STORAGE
    printf("i is %d\n",i); // 3
    }
    printf("i is %d\n",i); // 2
    }
    printf("i is %d\n",i); // 1


    


}


