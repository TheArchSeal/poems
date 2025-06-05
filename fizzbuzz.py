# for index in range 42
# print fizz if 3 divides it too
# if a factor is five
# then print buzz and strive
# to print index if neither is true

for index in range(1, 42):
    if index % 3 == 0:
        print("Fizz", end="")
    if index % 5 == 0:
        print("Buzz", end="")
    if not (index % 3 == 0 or index % 5 == 0):
        print(index, end="")
    print()
