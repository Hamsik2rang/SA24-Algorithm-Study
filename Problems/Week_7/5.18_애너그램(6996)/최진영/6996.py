def x(b):
    count = 0
    while(count<b):
        origin,anagram = input().split()
        alpha=origin
        beta=anagram
        a=list(origin)
        c=list(anagram)
        a.sort()
        c.sort()
        if(a == c):
            print('%s & %s are anagrams.'%(alpha,beta))
        elif(a != c):
            print('%s & %s are NOT anagrams.'%(alpha,beta))
        count=count+1

case=int(input())
x(case)

            
        
        
    
