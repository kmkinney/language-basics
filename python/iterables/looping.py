# Loop with an index using enumerate

my_list = ['kevin'*k for k in range(8)]

for i, elem in enumerate(my_list):
    print(i, elem)

# Zipping two iterables together

list1 = ['a', 'b', 'c']
list2 = [1, 2, 3]
print(list(zip(list1, list2)))