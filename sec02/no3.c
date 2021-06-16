#include<stdio.h>
#include<math.h>

int solution(int n, int m) {
    int sum = 0;
    for (int i = n; i <= m; i++) {
        if (i % 2 == 0) {
            sum += (int)pow(i, 2);
       }
    }
    return sum;
}


int main() {
    int N = 4;
    int M = 7;
    int ret = solution(N, M);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}