#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int comparator(const void *p, const void *q){
    int l = *(const int *)p;
    int r = *(const int *)q;
    return (l-r);
}


int main(){
    int t;scanf("%d",&t);
    while(t--){
        int n;scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int half = ceil(n/2.0);
        
        qsort(a,n,sizeof(a[0]),comparator);
        
        int result = a[0]*a[n-1];
        
        for(int i=1;i<half;i++){
            if(a[i]*a[n-1-i]!=result){
                printf("-1");
                return 0;
            }
        }
        printf("%d\n",result);
    }
    /*int ans = ceil(t/2.0);
    printf("%d",ans);*/
    return 0;
}
