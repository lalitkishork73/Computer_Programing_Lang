def suma(a, b):
    print(a+b)


suma(2, 2)


def greet(name, dish="pasta"):
    print('goodmorning', name)
    print('please enjoy your dish', dish)


# greet("elon")
greet("elon", "piza")

# return somthing


def sum_of_list(a):
    print("calculatig...")
    return sum(a)


marks = [1, 2, 5, 8, 4]
sum_of_mark = sum_of_list(marks)

print("sum of marks:", sum_of_mark)
