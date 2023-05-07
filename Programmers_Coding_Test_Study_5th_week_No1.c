#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
char *solution(const char *s)
{
    char *answer;
    int length = strlen(s);//#include string.h char*s가 받는 문자의 길이
    if (length % 2) // 홀수라면 
    {
        answer = (char *)malloc(sizeof(char) * 2);
        answer[0] = s[length / 2];
        answer[1] = '\0';
    }
    else //짝수라면
    {
        answer = (char *)malloc(sizeof(char) * 3);
        answer[0] = s[length / 2 - 1];
        answer[1] = s[length / 2];
        answer[2] = '\0';
    }
    return answer;
}