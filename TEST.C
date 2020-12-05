#include<stdio.h>

int main()
{
    int viva,writting,on_viva,on_writting;
    float v,v1,w,w1,v2,w2,total,f;
    printf("IUBAT ONLINE SUBJECT MARK CALCULATION BY SAKIB\n\n");
    printf("1.viva ");
    scanf("%d", &viva);
    printf("\n");
    printf("2.writting ");
    scanf("%d", &writting);
    printf("\n");
    printf("3.on_viva ");
    scanf("%d", &on_viva);
    printf("\n");
    printf("4.on_writting ");
    scanf("%d", &on_writting);
    printf("\n");
    v1=viva*100;
    v=v1/on_viva;
    printf("viva shown in 100 marks = %2f\n", v);
    printf("\n");
    w1=writting*100;
    w=w1/on_writting;
    printf("written shown in 100 marks = %2f\n", w);
     printf("\n");
    v2=v*0.6;
    printf("viva you got 60% = %2f\n", v2);
    printf("\n");
    w2=w*0.4;
    printf("written you got 40% = %2f\n", w2);
    printf("\n");
    total=v2+w2;
    printf("total mark in 100 = %2f\n", total);
    printf("\n");
    f=total*0.2;
    printf("final 20 mark you got = %2f",f);
    printf("\n");
}
