/*THIS PIECE OF SHIT CODE GOT ACC IN FIRST ATTEMPT WHAT???????? I'M KINDA' CLEAR ABOUT THE INTUITION BUT IT IS NOT CRYSTAL*/

#include<stdio.h>
int main(){
    int n;scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    int counter = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            counter++;
            if(counter%2){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        else{
            if(counter%2){
                printf("0");
            }
            else{
                printf("1");
            }
            counter--;
        }
    }
    return 0;
}
