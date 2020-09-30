#include <stdio.h>
struct stud
{
char name[50];
int roll;
float marks;
};

void calc(struct stud s1[], int n, int tot, float perc)
{
  int i,sum=0;
  for(i=0;i<n;i++)
  {
    int j;
    int tot;
    float perc;
    for(j=0;j<5;j++){
    sum=sum+s1[i].marks[j];

    s1[i].tot=sum;
    s1[i].perc=sum/5;
  }
}

int main()
{
  int i,n,j;

  struct stud s1;
  int num;

  printf("Enter the number of students: ");
  scanf("%d\n",&n);

  for(i=0;i<n;i++)
  {
  printf("Enter the name of students: ");
  scanf("%d\n",s1.name);

  printf("Enter the roll numbers of students: ");
  scanf("%d\n",&s1.roll);

  for(j=0;j<5;j++)
  {
  printf("Enter the marks of students: ");
  scanf("%d\n",&s1[i].marks[j]);
  }

  scanf("%d",&s[i].roll);
  for(i=0;i<5;i++)
  {
    tot=0;
    for(j=0;j<5;j++)
    {
      tot+=s[i].marks[j];
      perc=(tot/500)*100;
    }
  }
  calc(s1,num);

  printf("%d %.1f\n",s1[i].tot, s1[i].perc);

  return 0;
}
