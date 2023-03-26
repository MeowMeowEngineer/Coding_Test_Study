#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* s) {
    int answer=atoi(s), i=0;//atoi함수를 사용해서 주어진 문자열에서 첫 숫자부분을 answer변수에 삽입한다
    while(i < strlen(s)) {
        if (s[i]==' ') i++;//공백 부분이 나오면 문자열 index를 1증가시켜 skip시킨다
        if (s[i]=='+') answer+=atoi(&s[i+2]);//+연산자를 만나면 여기서부터 두칸 뒤가 다음 숫자이니
        //그것을 atoi함수를 사용해서 정수로 변환한 뒤 answer에 더해준다
        if (s[i]=='-') answer-=atoi(&s[i+2]);//빼기 연산도 똑같은 원리이다.
        i++; }
    return answer;//정답 반환
}