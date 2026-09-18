//soal 1 angka 1-100
for(let i=1;i<=100;i++){
        console.log("angka "+i);
}


//soal 1 segitiga
for(let i=1;i<=5;i++){
    let baris = "";
    for(let j=1;j<=i;j++){
            baris += j+" ";
    }
    console.log(baris);
}


//soal 1 titik titik
for(let i=1;i<=3;i++){
    let baris = "";
    for(let j=1;j<=4;j++){
        baris += ". ";
    }
    console.log(baris);
}


//soal 2 kategori listrik
let kwh = 175;

if(kwh>=300){
    console.log("Kategori Boros - Sebaiknya hemat listrik");
}
else if(kwh>=150 && kwh<=299){
        console.log("Kategori sedang - Pemakaian cukup wajar");
}
else if(kwh>=50 && kwh<=149){
    console.log("Kategori hemat - Pemakaian hemat");
}
else{
    console.log("Kategori Sangat hemat - pemakaian sangat hemat");
}
