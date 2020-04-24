#include <stdio.h>
#include <winsock2.h>
#include <windows.h>

void number() {

    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // True if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);

}

void number2() {

    int num2;
    printf("Enter an integer: ");
    scanf("%d", &num2);

    // True if num is perfectly divisible by 2
    if(num2 % 2 == 0)
        printf("%d is even.", num2);
    else
        printf("%d is odd.", num2);

}


int main(int argc, char *argv[])
{
  //ShowWindow (GetConsoleWindow(), SW_HIDE);

printf("hello world!");
printf("hello world!");
printf("hello world!");
printf("hello world!");
printf("hello world!");


   char cmd[50000];

strcpy(cmd, "payload");
system(cmd);

printf("hello world!");
printf("hello world!");
printf("hello world!");
printf("hello world!");
printf("hello world!");

return 0;
}