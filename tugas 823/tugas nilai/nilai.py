nilai = 90

match (nilai):
    case n if n >= 90:
        print("Nilaimu A")
    case n if n >= 80:
        print("Nilaimu B")
    case n if n >= 70:
        print("Nilaimu C")
    case n if n >= 60:
        print("Nilaimu D")
    case n if n < 60:
        print("Nilaimu E")
