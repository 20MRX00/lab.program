#include<stdio.h>


int main(void) {
    int kolvo;
    int x;
   int t,i, num[3][4];
// инициализация масива
for(t=0; t<3; ++t)
for (i=0; i<4; ++i)
num[t][i] = (t*4)+i+1;
//вывод массива
for (t=0; t<3; ++t)
{

for (i=0; i<4; ++i)
printf("%d  ",num[t][i]);
printf ("\n");
}

if(num[t][i] % 3 == 0&&num[t][i] % 7 == 0) kolvo++;

printf("%d  " , kolvo);
return 0 ;
}
