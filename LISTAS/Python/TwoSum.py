#Se resuleve el problema de letcode por listas
#Dado un arreglo nums y un numero target, ecuentra dos indices que sumen taget
#Ejemplo nums[1,3,2,7,5,2,4] target = 9       salida [2,3]

def twoSum(nums,target):
    nums2 = []

    for x in range(len(nums)):
        com = target-nums[x]
        if com in nums2:
            j = nums2.index(com)
            return [x,j]
        else:
            nums2.append(nums[x])
    return 0

target = 9
nums = [1,2,5,1,7]
print(twoSum(nums,target))