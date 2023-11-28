def reverse (angka) :
    reversed = 0
    while int(angka) != 0:
        remainder = int(angka) % 10
        reversed = reversed * 10 + remainder
        angka = int(angka) / 10
    return reversed

A, B = input().split()
A = reverse(A)
B = reverse(B)
C = A + B
print(reverse(C))