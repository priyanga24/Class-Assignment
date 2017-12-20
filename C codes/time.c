#include<stdio.h>
int main()
{
int hr[10],min[20];
int i,j,res[50],n,m,diff;
for(i=0;i<2;i++)
{
scanf("%d",&hr[i]);
}
for(i=0;i<2;i++)
{
scanf("%d",&min[i]);
}
for(i=0;i<2;i++)
{
res[i]=hr[i]*60+min[i];
}
for(i=0;i<2;i++)
{
if(res[i]<res[i+1])
{
diff=res[i+1]-res[i];
}
else
{
diff=res[i]-res[i-1];
}
}
//printf("%d",diff);
int result,hour;
result=diff/60;
hour=diff%60;
printf("%d:%d",hour,result);
return 0;
}
