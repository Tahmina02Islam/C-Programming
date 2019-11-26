#include <stdio.h>

int main() {
     long long int N;
     scanf("%lld",&N);
     int countOdd = 0;

     for (int i = 0; i < N; i++) {
            if ((i+1)%2 == 1) {
                  countOdd++;
            }
     }
     printf("%d\n", countOdd);
     return 0;
}
