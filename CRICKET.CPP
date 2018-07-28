                                                                          //c program on cricket scoreboard// 
#include<stdio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 11
int top=-1;
struct player
{
char nm[20];
int runs;
int balls;
}p;
void push(char a[MAX], int top ,char x[50])
{
if(top==MAX-1)
{
printf("No more entry for players! The team list is full!\n");
}
else 
{
        printf ("ENTER 11 PLAYERS OF TEAM %s with necessary details: \n",team1);
        for (int i=0;i<;i++)
        {
        printf("\nINPUT THE NAME OF THE PLAYER %d : \n",i+1);
        scanf("%s",nm);
        printf("INPUT THE NO OF BALLS FACED BY THE PLAYER %d : \n",i+1);
        scanf("%d",&bal);
        printf("INPUT THE NO OF RUNS SCORED BY THE PLAYER %d : \n",i+1);
        scanf("%d",&run);
        {
        if((run>=100)&&(run<200))
        printf("The cricketer is probably Rohit Sharma! The player scored a double hundred!\n");^M
        else if((run>264)&&(run<300))^M
        printf("The cricketer has surpassed Rohit Sharma's highest score! *  HATS OFF  *\n");^M
        else if(run>=300)^M
        printf("Congratulations! The cricketer scored a 300+ score!\n");^M
        else if((run>=50)&&(run<100))^M
        printf("The player has scored a half century!\n");^M
        else if(run<50)^M
        printf("The batsman's performance is average. He must spend time in nets! his score is below 50!\n");^M
        else^M
        printf("You levelled Rohit Sharma but you surely cannot match his class!\n");^M
        }

a[++top] = x;
}
}
int pop(char a[MAX],int top, char a[20])
{
char x[50];
if(top==-1)
{
printf("No player left. Add some to the team list!\n);
}
else
{
x = a[top--];
return x;
}
}
void display()
{
if(top==-1)
{
printf("The team list is empty!\n");
}
else
{
printf("===============================================================================\n");
printf("PLAYER'S NAME       RUNS       DELIVERIES      STRIKE RATE\n");
printf("===============================================================================\n");
for(i=0;i<n;i++)
{
printf(" %-20s %-20s %-12d %-15d %d\n",);

}
     
printf("%s",a[i]);
}
}
}
void main()
{ 
int i,n;
char ch,team1[20], team2[20];
printf("  WELCOME  TO   CRICKET   SCORE-SHEET \n");
printf("  ----------------------------------- \n");
printf("Enter the two team names:\n");
scanf("%s%s",team1,team2);

printf("\nTHANK YOU!\n");
}

