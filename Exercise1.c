#include <stdio.h>

int main()
{
    char* name = (char*)malloc(sizeof(char) * 100);
    printf("enter your name:");
    scanf("%[^\n]%*c", name);
    printf("Hello %s\n",name);
    int age;
    printf("Enter age: ");
    scanf("%d",&age);
    printf("%d\n",age);
    scanf("\n");
    char* phone = (char*)malloc(sizeof(char)*12);
    printf("Enter a phone number:");
    scanf("%[^\n]%*c", phone);
    printf("Your phone number is %s",phone);
    return 0;
}
