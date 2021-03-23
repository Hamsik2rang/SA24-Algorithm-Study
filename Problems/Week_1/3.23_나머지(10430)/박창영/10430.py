A, B, C = input().split()

# 처음 입력시에는 문자열로 type이 자동 지정 됨으로
# int형으로 강제 타입 변환한다.
A = int(A)
B = int(B)
C = int(C)

print((A+B)%C)
print(((A%C) + (B%C))%C)
print((A*B)%C)
print(((A%C)*(B%C))%C)