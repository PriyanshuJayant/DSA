const pattern6 = (n) => {
    for(let i = 1 ; i <= n ; i ++){
        let row = "";
        for(let j = 1 ; j <= n - i + 1 ; j ++){
            row += j;
        }
        console.log(row);
    }
}

const n = 5;
pattern6(n);