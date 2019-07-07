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
        
        
        /*SOURCE:https://stackoverflow.com/questions/37740898/int-multiplication-in-c-with-long-long-result
        
        Intermediate result type is the same as first argument type in this case. 
        So this code puts wrong value into sqr (because here you have integer overflow). Try this:

long long num = 77778;
long long sqr = num * num;
Another way with casting:

int num = 77778;
long long sqr = (long long) num * num;
To understand it better you can check these lines:

int ia = 1, ib = 2
double da = 1.0, db = 2.0 ;
double ic = ia / ib; // c == 0.0, because intermediate result of division is 0
double dc = da / db; // c == 0.5, expected result*/
        
        /*
        
        SOURCE:https://os.mbed.com/users/mbed714/notebook/integer-types-int-long-and-long-long/
        Note that int and long are the same size and if you want a 64 bit integer then you need to use long long (or unsigned long long).
        
        
        Number of bits in a character: 8
Size of character types is 1 byte
Signed char min: -128 max: 127
Unsigned char min: 0 max: 255
Default char is unsigned

Size of short int types is 2 bytes
Signed short min: -32768 max: 32767
Unsigned short min: 0 max: 65535

Size of int types is 4 bytes
Signed int min: -2147483648 max: 2147483647
Unsigned int min: 0 max: 4294967295

Size of long int types is 4 bytes
Signed long min: -2147483648 max: 2147483647
Unsigned long min: 0 max: 4294967295

Size of long long types is 8 bytes
Signed long long min: -9223372036854775808 max: 9223372036854775807
Unsigned long long min: 0 max: 18446744073709551615
        */
        
        
        
        
        /*
        SOURCE:http://www.tutorialspoint.com/cprogramming/c_data_types.htm
        char	1 byte	-128 to 127 or 0 to 255
unsigned char	1 byte	0 to 255
signed char	1 byte	-128 to 127
int	2 or 4 bytes	-32,768 to 32,767 or -2,147,483,648 to 2,147,483,647
unsigned int	2 or 4 bytes	0 to 65,535 or 0 to 4,294,967,295
short	2 bytes	-32,768 to 32,767
unsigned short	2 bytes	0 to 65,535
long	8 bytes	-9223372036854775808 to 9223372036854775807
unsigned long	8 bytes	0 to 18446744073709551615*/
        
        
        /*
        SOURCE:https://stackoverflow.com/questions/34447435/squaring-number-in-c-kaprekar-numbers
        Assuming your n to be typical int or unsigned int, the reason for this is because

this line

unsigned long long sq = n * n;
is equivalent to

unsigned long long sq = (int)(n * n);
as the n * n will be first processed (both as integers) before assigning the result to sq. So, this is an overflow problem (And welcome to Stack Overflow too!).

You also probably want to understand these terms overflow and casting more by searching around (since they are very common issues in Computing, understanding them early will be of great help!).

This has nothing to do with Kaprekar numbers. In most of nowadays machine int is 32-bit. Thus it can only handle value -2,147,483,648 to 2,147,483,647 (or 0 to 4,294,967,295 for unsigned integer counter part).

Thus processing n * n will give you:

n * n = 6,049,417,284 - 4,294,967,296 = 1,754,449,988 //overflow at (4,294,967,295 + 1)!
If you do casting before hand:

unsigned int n = 77778;
unsigned long long sq = pow(n, 2);
unsigned long long sq2 = (unsigned long long)n * n; //note the casting here.
std::cout << sq << std::endl;
std::cout << sq2 << std::endl;
Then the results will be identical, since there won't be overflow.

*/
        long long result = (long long) a[0]*a[n-1];
        
        int w;
        for(w=1;w<half;w++){
            long long current = (long long)a[w]*a[n-1-w];
            if(current!=result){
                printf("-1");
                break;
            }
        }
        if(w==half){
            printf("%I64d\n",result);
        }
        
    }
    /*int ans = ceil(t/2.0);
    printf("%d",ans);*/
    return 0;
}
