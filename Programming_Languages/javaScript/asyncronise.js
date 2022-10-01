console.log('this is asynchronise program');

setTimeout(()=>{

    for (let index = 0; index < 40 ; index++) {
        const element = index;
        console.log('this index no is'+element);
    }
},150);

console.log("done printing");