#include <stdio.h>
#include <string.h>
void reverseString(char *str){
    int start = 0;
    int end = strlen(str)-1;
while (start < end)
{
    char temp =str[start];
    str[start] = str [end];
    str[end] = temp;
    start++;
    end--;
}
}
int main()
{
    char str[1000];
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    for (int i=0;str[i];i++)
    {
        if (str[i] == '\n')
        {
            str[i] ='\0';
            break;
        }
    }
    reverseString(str);
    printf("Reverse string:%s\n",str);
    return 0;
}
