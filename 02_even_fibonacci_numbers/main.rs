use std::{
    env::args,
    process
};

fn main() {
    let max: i32 = match args().count() {
        2 => args().nth(1).expect("reason").parse::<i32>().unwrap(),
        _ => {
            eprintln!("\nInvalid number of arguments.");
            println!("This program sums up the even fibonacci numbers up to a max number given by the user as a parameter.\n");
            println!("Usage: <program> max_number");

            process::exit(1);
        }
    };

    let result: i32 = sum_even_fibonacci_until(max);

    println!("result: {:?}", result);
}

fn sum_even_fibonacci_until(max: i32) -> i32 {
    let mut last: i32 = 0;
    let mut current: i32 = 1;

    let mut sum: i32 = 0;
    while current < max {

        if current % 2 == 0 {
            sum += current;
        }

        let temp = last;
        last = current;
        current += temp;
    }

    sum
}
