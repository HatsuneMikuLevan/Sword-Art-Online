def cyclic_shift_right(lst):
    if not lst:
        return []
    last_element = lst[-1:]
    rest_of_list = lst[:-1]
    return last_element + rest_of_list

# Пример использования:
my_list = [1, 2, 3, 4, 5]
shifted_list = cyclic_shift_right(my_list)
print(shifted_list)
# Ожидаемый результат: [5, 1, 2, 3, 4]
