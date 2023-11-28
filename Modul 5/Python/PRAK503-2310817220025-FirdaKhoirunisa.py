def maksimal(a, b):
    return max(a, b)
def minimal(a, b):
    return min(a, b)

batas = 0; maks = -100000; minim = 100000
bilangan = int(input())
while batas < bilangan:
    angka = map(int, input().split())
    for nilai in angka:
      maks = maksimal(maks, nilai)
      minim = minimal(minim, nilai)
      batas += 1
print(maks, minim)    