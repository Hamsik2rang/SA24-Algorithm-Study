import math

def nodivide(a,b):
    first=a
    last=b
    v=0
    all=0
    result=[]
    pos=[2,3,5,7]
    if(first<=last):
        while(first<=last):
            while(v<len(pos)):
                if(first%pos[v]==0):
                    break
                v=v+1
            if(v==len(pos)):
                result.append(first)
               
            elif(first==2 or first==3 or first==5 or first==7):
                result.append(first)
            v=0
            first=first+1
        for v in result:
            all=all+v
    if(a==1):
        all=all-1
        del result[0]
    if not result:
        print(-1)
    else:
        print(all)
        print(result[0])

min=int(input())
max=int(input())
nodivide(min,max)

