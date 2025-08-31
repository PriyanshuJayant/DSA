function pattern2(n){
    for(let i = 0 ; i < n ; i ++){
        let row = "";
        for(let j = 0 ; j <= i ; j ++){
            row += "* ";
        }
        console.log(row);
    }
}

const n = 5;
pattern2(n);