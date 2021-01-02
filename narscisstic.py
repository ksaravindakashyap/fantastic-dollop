# 1. value = 4887
# 2. value = 153

b = [int(x) for x in str(value)]
print(b)
c = len(b)
print(c)
e = 0
for i in b:
    d = i ** c
    print(d)
    e += d
    # print(e)

if ( e == value):
    print("true")
else:
    print("false")


