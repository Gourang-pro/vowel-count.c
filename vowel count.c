#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str[50];
    int i,len,v=0,c=0,w=0;

    printf("\n enter the string :");

    gets(str);
    
    len=strlen(str);

    for(i=0;i<len;i++)
    {
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'||str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U')
        {
            v++;
        }    
        else if ((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        {
             c++;
        }
        else if(str[i]==' ')
        {
            w++;
        }
    }
    printf("\n vowels: %d",v);
    printf("\n consonants : %d",c);
    printf("\n number of words %d", (w+1));

return 0;
}

    
