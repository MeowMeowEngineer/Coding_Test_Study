#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    //int*arr=(int*)malloc(sizeof(int)*10);
   int answer = 0;
       
    int answer_arr[10]={11};
    for(int i=0;i<numbers_len;i++){
        answer_arr[numbers[i]]=numbers[i]; //numbers에 있으면 그 numbers의 값에 해당하는
        //answer_arr의 idx에 넣어주고
    }
    for(int j=0;j<10;j++){
        if(answer_arr[j]==0){//없는 숫자의 arr의 idx는 0이므로 그 인덱스를
            answer+=j;   //정답에 더해준다

        }
    }
 return answer;
}