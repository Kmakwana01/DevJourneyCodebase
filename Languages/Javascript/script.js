async function task(message) {
    // emulate time consuming task
    let n = 10000000000;
    while (n > 0){
        n--;
    }
    console.log(message);
}
console.log('Hi!');

// setTimeout(() => {
    console.log('Execute immediately.');
// }, 0);

console.log('Bye!');