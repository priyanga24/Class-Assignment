#include<stdio.h>
#include<string.h>
int main()
{
char ch[20];
gets(ch);
int l;
l=strlen(ch);
int i,count[100];
for(i=0;i<26;i++)
{
    count[i]=0;
}
for(i=0;i<l;i++)
{
    if(ch[i]>='a' && ch[i]<='z')
    {
        count[ch[i]-97]++;
    }
     if(ch[i]>='A' && ch[i]<='Z')
    {
        count[ch[i]-65]++;
    }

}
for(i=0;i<26;i++)
{
    if(count[i]>0)
    {
        printf("%c=%d",i+97,count[i]);
    }
}
}
