
arr = [1, 13, 5, 13, 9, 13, 2]
new_arr = []
for num in arr:
    if num != 13:
        new_arr.append(num)

arr = [1, 13, 5, 13, 9, 13, 2]
new_arr = [num for num in arr if num != 13]

