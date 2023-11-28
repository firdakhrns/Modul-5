def hitung (nilai1, nilai2):
    hitungan = nilai1 - nilai2
    if hitungan < 0:
        return hitungan *-1
    else:
        return hitungan

def mutlak (angka):
    return abs(angka)

a, c, b, d = map(int, input().split())
Hasil = hitung(a, b) + hitung(c, d)
print(mutlak(Hasil))