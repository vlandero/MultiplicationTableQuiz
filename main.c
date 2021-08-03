#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main()
{
int n,x,b,y,puncte,tictac;
char a;
#define ok 0
puncte=0;
printf("Esti gata sa dai un test din tabla inmultirii?\nScrie 'da' cand vrei sa incepi!\n");
scanf("%s",&a);
for(n=0;n<20;n++){
    x=((rand()+time(NULL))%10)+1;
    y=((rand()+time(NULL))%10)+1;
    printf("%d x %d\n",x,y);
    clock_t tic=clock();
    scanf("%d",&b);
    clock_t tac=clock();
    tictac=(double)(tac-tic)/CLOCKS_PER_SEC;
    if(tictac==1)
    printf("Ai raspuns intr-o secunda!\n");else
        printf("Ai raspuns in %d secunde!\n",tictac);
    if(b==x*y&&tictac<=10)
        puncte+=5;else if(tictac>10&&b==x*y)
            printf("Ai raspuns prea tarziu!\n"); else if(b!=x*y&&tictac<=10)
                printf("Gresit! Raspunsul era %d!\n",x*y); else if(b!=x*y&&tictac>10)
                    printf("Ai raspuns si gresit, dar si tarziu, raspunsul era %d!\n",x*y);
}
if(puncte%10==0)
    printf("Ai obtinut nota %d",puncte/10); else
        printf("Ai obtinut nota %d.5",puncte/10);


return ok;
}
