def cal(a):
    result=1
    i=1
    change=0
    while True:
        change=change+6*i
        if((a-2)//change==0):
            result=result+i
            break
        elif(a==1):
            break
        i=i+1
    if(a==1):
        result=1
    return result
    

a=int(input())
final=cal(a)
print(final)
