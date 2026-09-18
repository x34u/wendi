#soal 1 angka 1-100
for i in range(1,101):
        print("angka",i)


#soal 1 segitiga
for i in range(1,6):
    for j in range(1,i+1):
            print(j,end=" ")
    print()


#soal 1 titik titik
for i in range(1,4):
    for j in range(1,5):
        print(".",end=" ")
    print()


#soal 2 kategori listrik
kwh = 175

if kwh>=300:
        print("Kategori Boros - Sebaiknya hemat listrik")
elif kwh>=150 and kwh<=299:
    print("Kategori sedang - Pemakaian cukup wajar")
elif kwh>=50 and kwh<=149:
    print("Kategori hemat - Pemakaian hemat")
else:
    print("Kategori Sangat hemat - pemakaian sangat hemat")
