#include<stdio.h>
#include<string.h>
int main()
{   int len;
    char plain[200],encr[200];
    printf("enter the plain text:");
    gets(plain);
    len= strlen(plain);
    for(int i=0;i<=len;i++)
    {
        int temp = plain[i];
       temp = temp+3;
        encr[i] = temp;
    }
    printf("The encripted data is:");
    puts(encr);
    for(int i=0;i<=len;i++)
    {
        int temp = encr[i];
       temp = temp-3;
        encr[i] = temp;
    }
    printf("The decripted data is:");
    puts(encr);
    return 0;
}
