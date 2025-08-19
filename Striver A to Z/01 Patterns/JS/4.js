const pattern4 = (n) => {
    for (let i = 1; i <= n; i++){
        let row = "";
        for (let j = 1; j <= i; j++){
            row += j
        }
        console.log(row);
    }
}
const n = 5;
pattern4(n);