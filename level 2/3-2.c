// 3 포인터
// 3-2 포인터 연산
/* 먼저 크기가 5인 정수형 1차원 배열을 선언한 뒤 [1,2,3,4,5]로 값을 초기화한다. 
그 후 해당 배열의 첫 번째 원소부터 마지막 원소까지 배열 포인터의 덧셈 연산을 사용하여 모든 원소를 한 칸씩 띄워 출력하는 코드를 작성하시오. 
단, 배열의 인덱스 접근법인 []를 사용해선 안됩니다.
*/
#include <stdio.h>

int main(void) {
    int arr[5] = {1,2,3,4,5};
    for(int i=0; i<5; i++) {
       printf("%d ", *(arr+i));
    }
}