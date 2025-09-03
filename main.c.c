#include <stdio.h>

int main(){
    int age;
    printf("Enter Your Age:");
    scanf("%d", &age);
    printf("Your Age is:%d\n",age);
    if(age<14){
        printf("Your minor");
    }
    else if(age>=14 && age<=18){
        printf("Your adolecsent");
        
    }
    else{
        printf("Your adult");
    }
    return 0;
}
