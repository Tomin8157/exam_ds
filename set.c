#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int ch,s1[5],s2[5],s3[10],i,j,x,y;
void unio();
void intersection();
void difference();
void unio()
{
    printf("enter the 5 elements of set1\n");
    for(i=0;i<5;i++)
    {
       scanf("%d",&s1[i]);
    }
    printf("\nenter the 5 elements of set2\n");
     for(i=0;i<5;i++)
    {
       scanf("%d",&s2[i]);
    }

    printf("\nelements of set1: ");
    for(i=0;i<5;i++)
    {
        printf("%d\t",s1[i]);
    }
     printf("\nelements of set2: ");
    for(i=0;i<5;i++)
    {
        printf("%d\t",s2[i]);
    }

    }


void intersection()
{
     printf("enter the 5 elements of set1\n");
    for(i=0;i<5;i++)
    {
       scanf("%d",&s1[i]);

    }
    printf("\nenter the 5 elements of set2\n");
     for(j=0;j<5;j++)
    {
       scanf("%d",&s2[j]);

    }
    printf("\nelements of set1: ");
    for(i=0;i<5;i++)
    {
        printf("%d\t",s1[i]);
    }
     printf("\nelements of set2: ");
    for(i=0;i<5;i++)
    {
        printf("%d\t",s2[i]);
    }

}
void difference()
{
     printf("enter the 5 elements of set1\n");
    for(i=0;i<5;i++)
    {
       scanf("%d",&s1[i]);

    }
    printf("\nenter the 5 elements of set2\n");
     for(i=0;i<5;i++)
    {
       scanf("%d",&s2[i]);

    }
    printf("\nelements of set1: ");
    for(i=0;i<5;i++)
    {
        printf("%d\t",s1[i]);
    }
     printf("\nelements of set2: ");
    for(i=0;i<5;i++)
    {
        printf("%d\t",s2[i]);
    }
}

void main()
{
    while(1)
    {
        printf("\nSet operations");
        printf("\n\n1 union\n2 intersection\n3 difference\n4 exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: unio();
                    break;
            case 2: intersection();
                    break;
            case 3: difference();
                    break;
            case 4: exit(0);
                    break;
            default:"enter correct choice";
        }
    }
    getch();
}


