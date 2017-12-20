#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    scanf("%s",&ch);
    char temp;
    int i,j;
    for(i=0;i<=strlen(ch);i+=2)
    {
        
        
    
            
        
        temp=ch[i];
        ch[i]=ch[i+1];
        ch[i+1]=temp;
        }
       
    
   printf("%s%c",ch,temp);
    return 0;
}
