#include<stdio.h>
void main()
{
int a1[10],a2[10],a3[20],m,i,n,j,k,o;
printf("no of values in a1:");
scanf("%d",&m);
printf("no of values in a2:");
scanf("%d",&n);
printf("enter the values of a1\n");
for(i=0;i<m;i++)
{
scanf("%d",&a1[i]);
}
printf("enter the values of a2\n");
for(j=0;j<n;j++)
{
scanf("%d",&a2[j]);
}
i=0;
j=0;
k=0;
while(i<m && j<n)
{
if(a1[i]<a2[j])
{
a3[k]=a1[i];
i++;
k++;
}
else if(a2[j]<a1[i])
{
a3[k]=a2[j];
j++;
k++;
}
else
{
a3[k]=a1[i];
i++;
j++;
k++;
}
}
if (i<m)
while(i<m)
{
a3[k]=a1[i];
i++;
k++;
}
if (j<n)
while(j<n)
{
a3[k]=a2[j];
j++;
k++;
}
o=k;
printf("the array is\n");
for(k=0;k<o;k++)
printf("%d",a3[k]);
}

