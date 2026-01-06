def insert_at_start_100(lst):
    return [100] + lst

# Пример использования:
my_list = [1, 2, 3]
updated_list = insert_at_start_100(my_list)
print(updated_list)
# Ожидаемый результат: [100, 1, 2, 3]
def insert_at_start(lst, number):
    return [number] + lst

# Пример использования:
my_list = [1, 2, 3]
number_to_insert = 50
updated_list = insert_at_start(my_list, number_to_insert)
print(updated_list)
# Ожидаемый результат: [50, 1, 2, 3]
def insert_at_index(lst, number, index):
    return lst[:index] + [number] + lst[index:]

# Пример использования:
my_list = [1, 2, 3, 4]
number_to_insert = 99
index_to_insert = 2
updated_list = insert_at_index(my_list, number_to_insert, index_to_insert)
print(updated_list)
# Ожидаемый результат: [1, 2, 99, 3, 4]
