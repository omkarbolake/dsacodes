/*write a c program to read name and marks */
#include<stdio.h>
#include<stdlib.h>
void main()
{
    char name[50];
    int marks,i,num;
    FILE *fptr;
    fptr=fopen("student.txt","w");
    if(fptr==NULL)
    {
        printf("ERROR\n");
        exit(1);

    }
    printf("enter number of student\n");
    scanf("%d",&num);
    for(i=0;i<num;++i)
    {
        printf("for student%d\nEnter name:",i+1);
        scanf("%s",name);
        printf("enter marks:\n");
        scanf("%d",&marks);
        fprintf(fptr,"%s\n%d\n,name,marks\n");
    }
    fclose(fptr);
    if((fptr=fopen("student.txt","r"))==NULL)
    {
        printf("ERROR! opening file\n");
        exit(1);
    }
    for(;;)
    {
        fscanf(fptr,"%s",name);
        fscanf(fptr,"%d",&marks);
        printf("%s\n%d\n",name,marks);
        if(feof(fptr))
            break;

    }

}

