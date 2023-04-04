print("for loop")

for x in range(10):
    print(x, x*2)

for y in range(10):
    print(y, y*2, end=",")

for z in range(10):
    print(z, z*2, end=":")

a = 5

print("While loop")
while a >= 0:
    print(a)
    a -= 1

b = 0
while b <= 5:
    print(b)
    b += 1

print("Continue")
for i in range(10):
    if i == 2:
        continue
    else:
        print(i)

print("Break")
for i in range(10):
    if i == 7:
        break
    else:
        print(i)
