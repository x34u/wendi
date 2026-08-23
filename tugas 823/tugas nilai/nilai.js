let nilai = 90;

switch (true) {
    case (nilai >= 90):
        console.log("Nilaimu A");
        break;
    case (nilai >= 80):
        console.log("Nilaimu B");
        break;
    case (nilai >= 70):
        console.log("Nilaimu C");
        break;
    if (nilai >= 60) {
        console.log("Nilaimu D");
    }
    default:
        console.log("Nilaimu D");
        break;
}
