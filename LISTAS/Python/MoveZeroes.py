#Se resuelve el problema de lletcode MoveZeroes mediante el uso de listas
def moveZeroes(nums):
    pos = 0
    for x in range(len(nums)):
        if nums[x] != 0:
            nums[pos] = nums[x]
            pos += 1

    while pos < len(nums):
        nums[pos] = 0
        pos += 1

lista = [1,0,5,3,0,7,5,0]
moveZeroes(lista)
print(lista)