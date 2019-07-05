#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;scanf("%d",&n);
    int a[n];for(int i=0;i<n;i++){scanf("%d",&a[i]);}
    
    //set maxk to a very olarge vcalue like the limit of int. here, i'm taking a no big emough for the examples
    int maxk = 1000000000;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int absolute = abs(i-j);
            int mini = (a[i]<a[j])?a[i]:a[j];
            int k = mini/absolute;
            if(k<maxk)maxk=k;
        }
    }
    printf("%d",maxk);
    return 0;
}
//TLE on 
//300000
//977567083 984720825 651607777 512395030 588308997 930955958 545464361 967632638 463193938 511204651 485689114
