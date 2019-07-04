#include<stdio.h>
int main(){
    int n,a=0;scanf("%d",&n);
    char c;
    scanf("%c",&c);
    while(n--){
        scanf("%c",&c);
        
        if(c=='-'){
            a--;
            if(a<0)a=0;
        }
        else{
            a++;
        }
    }
    printf("%d",a);
    return 0;
}
