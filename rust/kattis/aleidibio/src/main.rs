use std::io::{self, BufRead};

fn read_int() -> u64 {
    io::stdin()
        .lock()
        .lines()
        .next()
        .unwrap()
        .unwrap()
        .parse()
        .unwrap()
}

fn main() {
    let a = read_int();
    let b = read_int();
    let c = read_int();
    println!("{}", c - b - a);
}
