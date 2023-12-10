#include<stdio.h>
#include<stdlib.h>
struct cricket
{
    char name[50];
    int runs;
};
typedef struct cricket cricket;
void data(cricket *c,int n);
void display(cricket *c, int n);
void display(cricket *c, int n)
{
    printf("-----------------------------\n");
    printf("Score Board\n\n");
    for(int i=0;i<n;i++)
    {
        printf("Batter name-%s\n",(c+i)->name);
        printf("Runs-%d\n",(c+i)->runs);
    }
}
void data(cricket *c,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        fflush(stdin);
        printf("Enter batter name-");
        scanf("%[^\n]s",&(c+i)->name);
        printf("Enter runs-");
        scanf("%d",&(c+i)->runs);
        sum = sum+ (c+i)->runs;
    }
    display(c,n);
    printf("Score-%d",sum);
}
void main()
{
    int n;
    cricket *c;
    printf("Enter number of players-");
    scanf("%d",&n);
    c=(cricket*)malloc(n*sizeof(cricket));
    data(c,n);
}