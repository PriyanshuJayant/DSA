function pattern1(n){
    for(let i = 0 ; i < n ; i ++){
        let row = "";
        for(let j = 0; j < n ; j ++){
            row += "* ";
        }
        console.log(row);
    }
}

const n = 5;
pattern1(n);