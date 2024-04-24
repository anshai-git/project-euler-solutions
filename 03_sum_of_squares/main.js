function main() {
	let test = sum_squares_until(100);
	console.log(test);
}

function sum_squares_until(max) {
	let sum_of_squares = 0;
	let square_of_sum = 0;

	for(let i = 1; i <= max; i++) {
		sum_of_squares += (i*i);
		square_of_sum += i;
	}
	square_of_sum = square_of_sum * square_of_sum;

	console.log("sum of squares: ", sum_of_squares);
	console.log("square of sum: ", square_of_sum);

	return Math.abs(sum_of_squares - square_of_sum);
}

main();
