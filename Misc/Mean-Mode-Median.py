from statistics import *
from numpy import average

l1 = [24,12,38,31,20,19,14,22,44,31,31,28,34,31,22,31,38,42,45,38,31,36,38,20,39]
print("Length of the list:", len(l1))
l2 = list()
l3 = list()
l1.sort()
print(l1)
print("Mean:", average(l1))
print("Mode:", mode(l1))
print("Median:", median(l1))
print("Variance:", round(variance(l1), 3))


for i in range(25):
    num = l1[i] - 30.36
    num = round(num, 3)
    l2.append(num)
    sq = pow(num, 2)
    sq = round(sq, 3)
    l3.append(sq)

print("\nX - G:", l2)
print("\n(X - G) ^ 2:", l3)