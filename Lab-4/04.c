int main()
{
    int n;
    printf("Digite um numero para descobrir se eh quadrado perfeito.\n");
    scanf("%d",&n);
    n=check(n);
    if(n==0){
        printf("O valor eh quadrado perfeito.");
    }else{
        printf("O valor nao eh quadrado perfeito");
    }


return 0;
}
int check(int a){
    int r=sqrt(a);
    if(a/r==r){
        return 0;
    }else{
        return 1;
    }
}