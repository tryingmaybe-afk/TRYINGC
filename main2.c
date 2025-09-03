#include <stdio.h>
int main(){
    char name[10];
    int age;
    char lastname[10];
    float height;
    char A,B,C;


    printf("Enter Your Name:\n");
    scanf("%s", name);
    printf("Enter Your Last Name:\n");
    scanf("%s", lastname);
    printf("Enter Your age:\n");
    scanf("%d", &age);
    printf("Enter Your Height\n");
    scanf("%f", &height);


    if(name[0]== 'A' || name[0]='B' || name[0]=='C'){
        printf("Your In The First class")
    }
    else{
        printf("Your Not In The First Class");
    }


    return 0;
}
