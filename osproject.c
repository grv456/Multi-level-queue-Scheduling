#include<stdio.h>
#include<unistd.h>
int main()
{
int p[20],bt[20], su[20], wt[20],tat[20],a, b, c, temp;
float wtavg, tatavg;
close;
printf("Enter the number of processes --- ");
scanf("%d",&c);
for(a=0;a<c;a++)
{
p[a] = a;
printf("Enter the Burst Time of Process %d --- ", a);
scanf("%d",&bt[a]);
printf("System/User Process (0/1) ? --- ");
scanf("%d", &su[a]);
}
for(a=0;a<c;a++)
for(b=a+1;b<c;b++)
if(su[a] > su[b])
{
temp=p[a];
p[a]=p[b];
p[b]=temp;
temp=bt[a];
bt[a]=bt[b];
bt[b]=temp;
temp=su[a];
su[a]=su[c];
su[c]=temp;
}
for(a=1;a<c;a++)
{
wt[a] = wt[a-1] + bt[a-1];
tat[a] = tat[a-1] + bt[a];
wtavg = wtavg + wt[a];
tatavg = tatavg + tat[a];
}
wtavg = wt[0] = 0;
tatavg = tat[0] = bt[0];
printf("\nPROCESS\t\t SYSTEM/USER PROCESS \tBURST TIME\tWAITING TIME\tTURNAROUND TIME");
for(a=0;a<c;a++)
printf("\n%d \t\t %d \t\t %d \t\t %d \t\t %d ",p[a],su[a],bt[a],wt[a],tat[a]);
printf("\nAverage Waiting Time is --- %f",wtavg/c);
printf("\nAverage Turnaround Time is --- %f",tatavg/c);
getc;
}
