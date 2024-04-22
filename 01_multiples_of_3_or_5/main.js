function sum(start, end) {
  let sum = 0;
  for (let i = start; i < end; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }
  return sum;
}

let result = sum(1, 10);
let result_2 = sum(1, 1000);

console.log(result)
console.log(result_2)

