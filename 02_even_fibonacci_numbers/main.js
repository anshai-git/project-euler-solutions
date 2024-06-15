function main() {
  
  let args = process.argv;

  if (args.length < 3) {
    console.log('This program sums even valued fibonacci numbers up until a given value (exclusive)');
    console.log('Usage: program <max_number>\n');
  }

  let max = +args[2];

  let result = sum_fibonacci_until(max);
  console.log(`Result: ${result}\n`);
}

function sum_fibonacci_until(max) {
  let last = 0;
  let current = 1;
  let sum = 0;

  while (current < max) {

    sum += current % 2 == 0 ? current : 0;
    
    let temp = current;
    current += last;

    last = temp;
  }

  return sum;
}

main();
