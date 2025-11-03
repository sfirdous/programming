# user_input = int(input('Enter a number '))
# if(user_input % 2):
#     print('Odd')
# else:
#     print('even')
    

# input = input('Enter a string ')
# vowels = 'aeiouAEIOU'
# v = 0
# c = 0
# for i in input:
#     if i in vowels:
#         v = v+1
#     elif i.isalpha():
#         c = c + 1
# print(v , ' ',c)

# nums = [int(x) for x in input('Enter a numbers ').split()]
# print(nums)

# nums = input("Enter numbers seprated by spaces ")
# print(type(nums))
# nums = list(map(int,nums.split()))
# print(nums)

# nums = []
# while True:
#     val = input('Enter a number ')
#     if not val:
#         break
#     nums.append(int(val))

nums = [34,78,3,12,4,6,8,23,45,334]
largest = 0

for num in nums:
    if num > largest:
        largest = num

nums.pop(nums.index(largest))


largest = 0
for num in nums:
    if num > largest:
        largest = num
print(largest)


first_largest = second_largest = float('-inf')
for num in nums:
    if num > first_largest:
        second_largest = first_largest
        first_largest = num
    elif num > second_largest and num != first_largest:
        num = second_largest
print(first_largest,second_largest)


list = [1,2,3,4,5,6,7,6,5,6,5,8,9,1,2,3,4,5,6,6,7]
unique = []

for l in list:
    if l not in unique:
        unique.append(l)
print(unique)