#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int how_many_divisor(int number){//각 숫자마다 약수의 개수 판별해주는 함수
    int divisor_cnt=0;
    for(int i=1;i<=number;i++){//for문을 돌면서 입력받은 숫자의
        if(number%i==0){//약수의 개수를 count 해준다
            divisor_cnt++;
        }
}
            return divisor_cnt;
}
int solution(int left, int right) {
    int answer = 0;
    for(int i=left;i<=right;i++){
        if(how_many_divisor(i)%2==0){
            answer+=i;    //return 받은 약수의 개수가짝수이면 answer에 더해주고
        }
        else{
            answer-=i;    //홀수이면 answer에 빼준다
        }
    }

    return answer;//정답 반환
}