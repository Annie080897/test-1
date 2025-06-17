/*
    PowerShell
    1. go to directory
        cd .\x64\Debug\ 

    2. run compiled programm 
        .\array-test.exe



        ----------------------
            x64 - processor architecture

*/

 //_CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>



int main(/*int argc, char* argv[]*/) // argc - arguments count, argv - arguments value
{

    int age;

    printf("Please enter your age: ");

    int val = scanf("%d", &age);

    printf("\nyour age is %d \n", age);
}

