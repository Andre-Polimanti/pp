#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p;
    int hc,mc,tc,ts,hs,ms,dh,dm,t;

    printf("Digite as horas (meia noite como 24h) seguidas pelos minutos do horario de chegada ao estacionamento.\n");
    scanf("%d %d",&hc,&mc);

    printf("Digite as horas seguidas pelos minutos do horario de saida do estacionamento.\n");
    scanf("%d %d",&hs,&ms);

    if(hc==hs&&mc==ms){
        p=1*2+2*1.4+20*2;
        printf("O preco eh %f",p);
    }else if(hc>hs&&mc==ms){
        t=(24+hs-hc);
        if(t==1){
            p=1*1;
            printf("O preco eh %f",p);
        }else if(t==2){
            p=1*2;
            printf("O preco eh %f",p);
        }else if(t==3){
            p=2+1.4*1;
            printf("O preco eh %f",p);
        }else if(t==4){
            p=2+1.4*2;
            printf("O preco eh %f",p);
        }else{
            p=2+2.8+(t-4)*2;
            printf("O preco eh %f",p);
        }
    }else if(hc>=hs&&mc>=ms){
        t=(24+hs-hc);
        if(t==1){
            p=1*1;
            printf("O preco eh %f",p);
        }else if(t==2){
            p=1*2;
            printf("O preco eh %f",p);
        }else if(t==3){
            p=2+1.4*1;
            printf("O preco eh %f",p);
        }else if(t==4){
            p=2+1.4*2;
            printf("O preco eh %f",p);
        }else{
            p=2+2.8+(t-4)*2;
            printf("O preco eh %f",p);
    }

    }else if(hc<hs&&mc==ms){
        t=hs-hc;
        if(t==1){
            p=1*1;
            printf("O preco eh %f",p);
        }else if(t==2){
            p=1*2;
            printf("O preco eh %f",p);
        }else if(t==3){
            p=2+1.4*1;
            printf("O preco eh %f",p);
        }else if(t==4){
            p=2+1.4*2;
            printf("O preco eh %f",p);
        }else{
            p=2+2.8+(t-4)*2;
            printf("O preco eh %f",p);
        }
    }else if(hc<=hs&&mc<ms){
        t=hs-hc;
        if(t==0){
            p=1*1;
            printf("O preco eh %f",p);
        }else if(t==1){
            p=1*2;
            printf("O preco eh %f",p);
        }else if(t==2){
            p=2+1.4*1;
            printf("O preco eh %f",p);
        }else if(t==3){
            p=2+1.4*2;
            printf("O preco eh %f",p);
        }else{
            p=2+2.8+(t-4)*2;
            printf("O preco eh %f",p);
        }
    }else if(hc<hs&&mc>ms){
        t=hs-hc;
        if(t==1){
            p=1*1;
            printf("O preco eh %f",p);
        }else if(t==2){
            p=1*2;
            printf("O preco eh %f",p);
        }else if(t==3){
            p=2+1.4*1;
            printf("O preco eh %f",p);
        }else if(t==4){
            p=2+1.4*2;
            printf("O preco eh %f",p);
        }else{
            p=2+2.8+(t-4)*2;
            printf("O preco eh %f",p);
        }
    }else if(hs<hc&&mc<ms){
        t=(24+hs-hc);
        if(t==0){
            p=1*1;
            printf("O preco eh %f",p);
        }else if(t==1){
            p=1*2;
            printf("O preco eh %f",p);
        }else if(t=2){
            p=2+1.4*1;
            printf("O preco eh %f",p);
        }else if(t==3){
            p=2+1.4*2;
            printf("O preco eh %f",p);
        }else{
            p=2+2.8+(t-4)*2;
            printf("O preco eh %f",p);
        }
    }else{
        printf("Invalido");
    }
return 0;
}

