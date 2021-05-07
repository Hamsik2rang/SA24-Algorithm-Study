def side(a):
    pibo=[]
    first=1
    result=0
    next=0
    last=0
    i=0
    while(i<=a):
        result=first+next
        first=next
        next=result
        pibo.append(result)
        i=i+1
    last=pibo[a]*2 + pibo[a-1]*2
    return last

count=int(input())
ends=side(count)
print(ends)
