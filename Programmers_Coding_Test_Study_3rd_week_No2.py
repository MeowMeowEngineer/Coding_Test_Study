def solution(d, budget):
    answer = 0
    #입력받은 d를 오름차순으로 정렬
    sorted_d = sorted(d)
    #정렬된 d를 0번인덱스부터 더해서 budget 보다 작거나 같을 때 까지 더하고
    sum_of_d = 0
    i = 0
    while (i < len(sorted_d) and sum_of_d<=budget):
            sum_of_d+=sorted_d[i]
            if(sum_of_d>budget):
                 break
            answer +=1
            i+= 1
    #그 더한 횟수를 카운트
    return answer