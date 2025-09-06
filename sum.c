#include<stdio.h>

int sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

void main(){
    int n;
    int s=0;
    scanf("%d",&n);

    s = sum(n);
    
    printf("sum=%d\n",s);
}