#include<stdio.h>
#include<ctype.h>
#include<string.h>
int checkpass(char *pass)
{
  int score=0;
  int chlow=0,chup=0,chd=0,chsp=0;
  int len=0;
  len=strlen(pass);
  for(int i=0;i<len;i++)
  {
    if(islower(pass[i]))
    {
    chlow=1;
    }
    else if(isdigit(pass[i]))
    {
    chd=1;
    }
    else if(isupper(pass[i]))
    {
    chup=1;
    }
    else
    {
    chsp=1;
    }
  }
  if(len>=8)
  {
  score++;
  }
  if(chlow)
  {
  score++;
  }
  if(chup)
  {
  score++;
  }
  if(chd)
  {
  score++;
  }
  if(chsp)
  {
  score++;
  }
  return score;
}
int display(int score)
{
if(score==2)
{
printf("Password:Weak\n");
printf("Choose another or use combination of characters,numbers and special characters\n");
}
else if(score==3)
{
printf("Password:Average/Moderate\n");
printf("Password strength is average use additional characters avoid using repeated passwords");
}
else
{
printf("Password is strong\n");
}
}
int main()
{
  char pass[20];
  printf("Enter the password to test the strength of it:");
  scanf("%s",pass);
  int score=checkpass(pass);
  display(score);
  return 0;
}
