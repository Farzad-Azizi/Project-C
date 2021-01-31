#include<stdio.h>
#include<conio.h>
#include<string.h>
int i=0,counter=0;
typedef struct flight
{
    int number;
    char time[20];
    char date[20];
    char port[20];
    char dest[20];
    char type[20];
}fa;
int table(fa s[],int n)
{
    int j=0;
    for(j=0;j<n;j++)
    {
      printf("pleas enter flight number:");
      scanf("%d",&s[i].number);
      printf("pleas enter flight time:");
      scanf("%s",s[i].time);
      printf("pleas enter flight date:");
      scanf("%s",s[i].date);
      printf("please enter flight port:");
      scanf("%s",s[i].port);
      printf("please enter flight destination:");
      scanf("%s",s[i].dest);
      printf("please enter flight type:");
      scanf("%s",s[i].type);
      printf("\n");
      printf("\n***information added to list***\n\n");
      i++;
    }
 return i;
}
void edit(fa s[])
{
    int r,k=0,flag=0;
    printf("please enter the flight number:");
    scanf("%d",&r);
    printf("******************\n");
    for(k=0;k<i;k++)
    {
        if(r==s[k].number)
        {
         printf("number:%d\ntime:%s\ndate:%s\nport:%s\ndestination:%s\ntype:%s\n",s[k].number,s[k].time,s[k].date,s[k].port,s[k].dest,s[k].type);
         printf("\nplease enter new flight number:");
         scanf("%d",&s[k].number);
         printf("pleas enter new flight time:");
         scanf("%s",s[k].time);
         printf("pleas enter new flight date:");
         scanf("%s",s[k].date);
         printf("please enter new flight port:");
         scanf("%s",s[k].port);
         printf("please enter new flight destination:");
         scanf("%s",s[k].dest);
         printf("please enter new flight type:");
         scanf ("%s",s[k].type);
         printf("\n***information successfully edited***\n");
         flag++;
        }
    }
    if(flag==0)
        printf("no match found!");
}
    void search1(fa s[])
{
    int n,k=0;
        printf("please enter flight number:");
        scanf ("%d",&n);
   for(k=0;k<i;k++)
   {
        if(n==s[k].number)
        {
           printf("*******************\n");
           printf("number:%d\ntime:%s\ndate:%s\nport:%s\ndestination:%s\ntype:%s\n",s[k].number,s[k].time,s[k].date,s[k].port,s[k].dest,s[k].type);
           printf("*******************\n");
           counter++;
        }
   }
   if(counter==0)
    printf("no match found!\n");
}

void search2(fa s[])
{
    char p[50];
    int k=0;
        printf("please enter flight port:");
        scanf("%s",p);
   for(k=0;k<i;k++)
   {
        if(strcmp(p,s[k].port)==0)
        {
           printf("*******************\n");
           printf("number:%d\ntime:%s\ndate:%s\nport:%s\ndestination:%s\ntype:%s\n",s[k].number,s[k].time,s[k].date,s[k].port,s[k].dest,s[k].type);
           printf("*******************\n");
           counter++;
        }
   }
   if(counter==0)
    printf("no match found!\n");
}
void search3(fa s[])
{
    char d[10];
    int k=0;
        printf("please enter flight destination:");
        scanf("%s",d);
   for(k=0;k<i;k++)
   {
        if(strcmp(d,s[k].dest)==0)
        {
           printf("****\n");
           printf("number:%d\ntime:%s\ndate:%s\nport:%s\ndestination:%s\ntype:%s\n",s[k].number,s[k].time,s[k].date,s[k].port,s[k].dest,s[k].type);
           printf("****\n");
           counter++;
        }
   }
   if(counter==0)
    printf("no match found!\n");
}
void d(fa s[])
{
 int g,k;
 printf("please enter flight number:");
 scanf ("%d",&g);
 for (k=0;k<i;k++)
 {
     if (g==s[k].number)
     {
          s[k]=s[i];
          printf("\t\t\t\tinformation deleted\n");
     }

 }
}

void main ()
{
    int a,n,j,x;
    fa s[100];
  for(;;)
    {
      printf("\t\t\t\t\t\t1.add list a flight\n");
      printf("\t\t\t\t\t\t2.remove a flight\n");
      printf("\t\t\t\t\t\t3.edit a flight\n");
      printf("\t\t\t\t\t\t4.search a flight\n");
      printf("\t\t\t\t\t\t5.show flights lists\n");
      printf("\n\n");
      printf("please enter number:");
      scanf("%d",&a);
      if(a==1)
      {
        printf("how many flight you want to add:");
        scanf("%d",&n);
        table(s,n);
      }
      if (a==2)
          d(s);
      if(a==3)
        edit(s);
      if(a==4)
         {
             printf("1.search by flight number\n");
             printf("2.search by flight port\n");
             printf("3.search by flight destination\n");
             printf("please enter a number:");
             scanf("%d",&x);
             if(x==1)
               search1(s);
             if(x==2)
               search2(s);
             if(x==3)
               search3(s);
         }
      if(a==5)
      {
          printf("**********************\n");
        for(j=0;j<i;j++)
        {
           if(s[j].number==0)
            continue;
            printf("number:%d\ntime:%s\ndate:%s\nport:%s\ndestination:%s\ntype:%s\n",s[j].number,s[j].time,s[j].date,s[j].port,s[j].dest,s[j].type);
            printf("*********************\n");
        }
      }
        getch();
    }
}
