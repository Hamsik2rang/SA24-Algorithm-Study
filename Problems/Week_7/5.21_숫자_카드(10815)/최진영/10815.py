def binary_search(num,lst,count):
    l = 0
    r = count-1
    m=sorted(lst)
    while l <= r :
        mid = (l+r)//2
        if m[mid] == num :
            mid=num
            break
        elif m[mid] > num :
            r = mid - 1
        else:
            l = mid + 1
    return mid


def x(a,b):
    result=[]
    for y in list2:
        result.append(0)
        for x in list1:
            if(binary_search(x,list1,have)==binary_search(y,list2,goal)):
                result.pop()
                result.append(1)
                break
    print(result)

have=int(input())
list1=list(map(int, input().split()))
goal=int(input())
list2=list(map(int, input().split()))
x(have,goal)

