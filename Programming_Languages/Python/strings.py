name = "lalit kishor"
paragraph = ''' this world never
 recognize my hard work until i 
 will not belive on my own skills '''

print(name)
print(paragraph)

# indexin of string

print(name[2])
# access last index
print(name[-1])

# range spacific

new_name = "Avengers"

print(new_name[1:5])
print(new_name[3:7])
print(new_name[:4])
print(new_name[4:])
# it gentrate space between
print(new_name[1:7:2])
print(new_name[::-1])
print(new_name[-1:0:-1])
print(new_name[-1:0:1])


a = "fri"
b = "day"
print(a+b)

# repeat the string
c = a*2
print(c)

# for loop on string

for my_char in a:
    print(my_char, " ", my_char*3)

s = "This"
n = "1234"
print(s.isalpha())
print(s.islower())
print(s.isupper())
print(s.isalpha())
print(n.isdigit())

# trim spaces around
st = "   lalit       "

print(st.lstrip())
print(st.rstrip())
print(st.upper())
print(st.lower())
