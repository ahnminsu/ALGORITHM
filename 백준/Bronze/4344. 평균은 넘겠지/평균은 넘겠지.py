n=int(input())

for i in range(n):
    a_list=list(map(int,input().split()))
    avg=sum(a_list[1:])/a_list[0]
    cnt=0
    for score in a_list[1:]:
        if score>avg:
            cnt+=1
    rate=(cnt/a_list[0])*100 
    print(f'{rate:.3f}%')