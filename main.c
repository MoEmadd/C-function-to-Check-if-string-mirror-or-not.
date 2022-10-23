#include <stdio.h>
void mirror(char arr[100],int size);
int main()
{
    char a[100];
    int x;
    printf("Enter the string : ");
    gets(a);
    x=strlen(a);
    mirror(a,x);

    return 0;
}
void mirror(char arr[100],int size)
{
    int i=0,count =0;
    for(i=0;i<size/2;i++)
    {
        if(arr[i]!=arr[size-i-1])
            count++;
        else
            continue;
    }
    if(count==0)
        printf("This string is mirror");
    else
        printf("This string is not mirror");
}
