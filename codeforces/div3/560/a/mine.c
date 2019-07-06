#include<stdio.h>
#include<math.h>
int main(){
    int cnt1=0,n,x,y;scanf("%d%d%d",&n,&x,&y);
    //n--;x--;y--;
    char s[2*100001];scanf("%s",&s);
    for(int i=n-x;i<n;i++){
        if(s[i]=='1')cnt1++;
    }
    
     
    if(s[n-y-1]=='0')cnt1++;
    else cnt1--;
    printf("%d",cnt1);
    return 0;
}
