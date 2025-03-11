list_str = []
esquerda = 0
lista_two = []
x = input(str(""))
list_str.append(x)
print(list_str)


for i in range (len(list_str[0])):
    if list_str[0][i] == '2':
        lista_two.append(list_str[0][i])

for i in lista_two:
    print(i,end)



# manip de str (C)