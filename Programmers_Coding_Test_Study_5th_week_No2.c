#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// number_len은 배열 number의 길이입니다.
int solution(int number[], size_t number_len) {
    int answer = 0;
    int is_sum_zero=0;
    //[0]부터 더해서 0이 되면 answer +1 한다
    for(int i=0;i<number_len;i++){
        is_sum_zero=number[i];
        for(int j=i+1; j<number_len;j++){
            for(int k=j+1; k<number_len;k++){
                is_sum_zero+=(number[j]+number[k]);
                if(is_sum_zero==0){
                    answer++;
                    printf("(%d, %d, %d)",number[i],number[j],number[k]);
                    is_sum_zero=number[i];
                }
                else{
                    is_sum_zero=number[i];
                }
            }
        }
    }
    return answer;
}