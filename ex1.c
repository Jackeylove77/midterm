#include <stdio.h>
int main()
{
    char str[100];
    int i,num=0,word=0;
    char c;
    gets(str);
    for (i=0;(c=str[i])!='\0';i++)
        if(c==' ') word=0;
    else if(word==0)
    {
        word=1;
        num++;
    }
    printf("The number of the word is:%d.\n",num);
    return 0;
}