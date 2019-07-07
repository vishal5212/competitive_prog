#include<stdio.h>
int main(){
    int j=0,cnt=0,n;scanf("%d",&n);
    if(n==0){
        printf("0");
        return 0;
    }
    char ans[n+2], s[n+2];scanf("%s",s);
    for(int i=0;i<n;i++){
        char first,second;
        while(s[i]==s[i+1]){
            i++;    
            cnt++;
        };
        
        first=s[i];second=s[i+1];
        
        while(first==second){
            cnt++;
            i++;
            second=s[i];
        }
        if(first!='\0' && second=='\0'){
            cnt++;
        }
        else{
            ans[j++]=first;ans[j++]=second;
        }
       
        i++;
    }
    ans[j]='\0';
    printf("%d\n%s",cnt,ans);
    
    return 0;
}
