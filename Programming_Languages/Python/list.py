list = [1, 2, 2, 3, 5, "mulist"]

print(list)
print(list[1])
print(list[0])
print(list[5])
print(list[-1])

list[4] = "mongoDb"
print(list)

# delete elements from list

del list[2]
print(list)

# list comprehension
new_list = [x for x in range(10)]
print(new_list)

even_list = [x for x in range(10) if x % 2 == 0]
print(even_list)

odd_list = [x for x in range(10) if x % 2 == 1]
print(odd_list)

# print n*n

o = [3**i for i in range(10)]
print(o)

# list methods

list.append("nembo")
print(list)

list.insert(1, 1.5)
print(list)

num = [5, 7, 1, 2, 9, 8, 11]
num.sort()
print(num)

fruits = ["banana", "orange", "pinapple", "apple"]
fruits.sort()
print(fruits)

num.pop()
print(num)

print(fruits.index("banana"))
print(fruits.count("pinapple"))

fruits.reverse()
print(fruits)

fruits.clear()
print(fruits)

print(len(num))
print(max(num))
print(min(num))

st = "squnece"

for ele in num:
    print(ele*2,end=" ")
