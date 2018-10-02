#include <stdio.h>
#include <limits.h>

int main(){
 int flag = 2;
 int brojTrougla;
while (flag !=1)
{

printf("unesi broj: ");
scanf("%d", &brojTrougla);


if(scanf("%d",&brojTrougla == EOF))
 {
  break;
 }

if ((brojTrougla < 1) ||(brojTrougla > UCHAR_MAX) )
{
  flag =1;
  printf("ERR\n");

}

else{

flag++;
printf("%d\n",flag);

}


}


return 0;
}
