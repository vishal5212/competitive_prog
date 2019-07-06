#include<stdio.h>
#include<stdlib.h>

int comparator(const void *p,const void *q){
    int l=*(const int *)p;
    int r=*(const int *)q;
    return (l-r);
}

int main(){
    int n,k=1;scanf("%d",&n);
    int a[n];for(int i=0;i<n;i++)scanf("%d",&a[i]);
    
    
    qsort(a,n,sizeof(a[0]),comparator);
    
    //for(int i=0;i<n;i++)printf("%d ",a[i]);
    for(int i=0;i<n;i++){
        if(a[i]>=k){
            k++;
            
        }
    }
    k--;
    printf("%d",k);
    
    return 0;
}
