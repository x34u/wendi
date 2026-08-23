let rows = 5;

do {
    let line = "";
    let j = 1;
    while (j <= rows) {
        line += " ";
        j++;
    }
    let k = 1;
    while (k <= (5 - (rows - 1))) {
        line += "*";
        k++;
    }
    console.log(line);
    rows--;
} while (rows > 0);
