#include<bits/stdc++.h>
using namespace std;
 
int arr[2000006];
long long brr[2000006];
long long crr[2000006];
long long last[2000006];
int max_num = 2000006;
 
int main(){
    
    int t;
    scanf("%d", &t);
    for(int k = 0; k < t; ++k){
        int n;
        scanf("%d", &n);
        for(int i = 0; i < n; ++i) {
            scanf("%d", &arr[i]);
        }    
        long long mn = arr[0], mx = arr[0];
        for(int i = 1; i < n; ++i){
            if(arr[i] < mn) mn = arr[i];
            if(arr[i] > mx) mx = arr[i];
        }
        long long num = mn * mx;
        long long r = sqrt(num);
        int p = 0;
        int q = 0;
        for(int i = 2; i <= r; ++i){
            if(num % i == 0){
                if(r*r == num && i == r) {
                    brr[p++] = i;
                }else{
                    brr[p++] = i;
                    crr[q++] = num / i;
                }
            }
        }
        
        for(int i = 0; i < p; ++i){
            last[i] = brr[i];
        }
        for(int i = q - 1; i >= 0; --i){
            last[p - 1 + (q - i)] = crr[i];
        }
        
        if(n != p + q){
 
            cout << "-1" << endl;
        }else{
            sort(arr, arr+n);
            int i;
            for(i = 0; i < n; ++i) {
                if(arr[i] != last[i]){
                    break;
                }
            }
            if(i != n){
                cout << "-1" << endl;
            }else{
                cout << num << endl;
            }
        }
    }
    
}
