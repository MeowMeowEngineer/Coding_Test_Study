#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len, int height) {
    int answer = 0;
    for(int i=0;i<array_len;i++){
        if(height<array[i]){//머쓱이 키보다 크다면
            answer++;//정답값을 1 증가시켜준다
        }
    }//수정 완료

    return answer;
}