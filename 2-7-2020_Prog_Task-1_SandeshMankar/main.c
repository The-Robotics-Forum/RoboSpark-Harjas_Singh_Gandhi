#include<stdio.h>

struct Student
{
  int stud_id;
  char stud_name[50];
  int stud_year;
  float stud_cgpa;

}s[4];


int main()
{  int i,j;
    for(i=1;i<=4;i++)
    {

    printf("Student ID :-");
    scanf("%d",&s[i].stud_id);
    printf("Student name :-");
    scanf("%s",&s[i].stud_name);
    printf("Student year :-");
    scanf("%d",&s[i].stud_year);
    printf("Student cgpa :-");
    scanf("%f",&s[i].stud_cgpa);
    printf("\n\n\n\n");
    }
     printf("\n\n\nINFORMATION PROVIDED:-\n\n");
    for(j=1;j<=4;j++)
    {

    printf("ID:-%d\n\n",s[j].stud_id);
    printf("NAME:-%s\n\n",s[j].stud_name);
    printf("YEAR:-%d\n\n",s[j].stud_year);
    printf("CGPA:-%f",s[j].stud_cgpa);
    printf("\n\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n");
    }
    }
