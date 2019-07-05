#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;scanf("%d",&n);
    int a[n];for(int i=0;i<n;i++){scanf("%d",&a[i]);}
    int maxk = 
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int absolute = abs(i-j);
            int mini = (a[i]<a[j])?a[i]:a[j];
            int k = mini/absolute;
            if(k<maxk)maxk=k;
        }
    }
    return 0;
}
