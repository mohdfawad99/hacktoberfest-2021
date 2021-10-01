const total = parseInt(prompt('Enter a total multiplication number: '));

const num = parseInt(prompt('Enter an integer: '));

for(let i = 1; i <= total; i++) {

    const res = i * num;

    console.log(`${num} * ${i} = ${res}`);
}