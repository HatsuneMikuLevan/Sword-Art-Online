

arr = [10, 20, 30, 40, 50]
k = 2  # Индекс удаляемого элемента (в данном случае 30)
new_arr = []
for i in range(len(arr)):
    if i != k:
        new_arr.append(arr[i])

arr = [10, 20, 30, 40, 50]
k = 2
new_arr = [arr[i] for i in range(len(arr)) if i != k]

