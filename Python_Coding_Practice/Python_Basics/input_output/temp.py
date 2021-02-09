#INPUT
# 1:apple 2:banana 3:mango 5

l= list(input().split())
int_list = []
str_list = []

for index in range(len(l)-1):
    int_,str_ = l[index].split(':')
    int_list.append(int(int_))
    str_list.append(str_)
last_elem = int(l[-1])

print(l)
print(int_list)
print(str_list)
print(last_elem)
