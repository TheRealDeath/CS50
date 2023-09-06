#include <stdio.h>

int main()
{
    char* name = (char*)malloc(sizeof(char) * 100);
    printf("enter your name: ");
    scanf("%[^\n]%*c", name);
    int age;
    printf("Enter age: ");
    scanf("%d",&age);
    getchar();
    char* phone = (char*)malloc(sizeof(char)*12);
    printf("Enter a phone number:");
    scanf("%[^\n]%*c", phone);
    printf("Your name is %s\n",name);
    printf("Your age is %d\n",age);
    printf("Your phone number is %s",phone);
    return 0;
}
