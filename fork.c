#include<stdio.h>
int main()
{
int pid;
pid=fork();
if(pid==0)
{
printf("this is child %d\n",pid);
}
else
{
printf("this is parent\n");
}

}
