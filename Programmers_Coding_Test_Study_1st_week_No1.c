#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// absolutes_len은 배열 absolutes의 길이입니다.
// signs_len은 배열 signs의 길이입니다.
int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len) {
    int answer = 0;
    //반복문으로
    for(int i=0; i<signs_len; i++){
        if(signs[i] == true){    //싸인의 값이 true 이면 
            answer += absolutes[i]; //absolutes의 값 그대로 출력해서 answer에 더한다
        }
        else{ //false이면 
            answer -= absolutes[i]; //answer에서 빼준다
        }
    }
    return answer;//정답 반환
}