fn main() {
    let test = sum(1, 10);
    println!("test: {:?}", test);

    let result = sum(1, 1000);
    println!("result: {:?}", result);
}

fn sum(start: i32, end: i32) -> i32 {
    let mut sum: i32 = 0;

    for n in start..end {
        if n % 3 == 0 || n % 5 == 0 {
            sum += n;
        }
    }

    sum
}
