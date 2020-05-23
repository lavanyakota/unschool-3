#include<stdio.h>
#include<string.h>
struct Employee
{
 int id;
 char name[20];
 int exp;
 long salary;
};
int main()
{
 int i;
 struct Employee emp[5];
 for(i=0;i<5;i++)
 {
  printf("Enter details of employee %d",i+1);
  printf("Id:");
  scanf("%d",&emp[i].id);
  printf("Name:");
  scanf("%s",&emp[i].name);
  printf("Experience:");
  scanf("%d",&emp[i].exp);
  printf("Salary:");
  scanf("%ld",&emp[i].salary);
 }
 printf("Details of Employees:");
 printf("\n Empid \t Name \t Experience \t Salary);
 for(i=0;i<5;i++)
 {
  printf("\n %d \t %s \t %d \t %ld",emp[i].id,emp[i].name,emp[i].exp,emp[i].salary);
 }
}