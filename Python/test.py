from itertools import permutations

a = ['R', 'R', 'R', 'D', 'D', 'D']
print(set(permutations(a, 6)))
print(len(set(permutations(a, 6))))