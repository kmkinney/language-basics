use core::panic;
use std::io::{stdin, BufRead};

fn main() {
    let mut input = stdin().lock().lines();
    let mut get_line = || input.next().unwrap().unwrap();

    let n: i64 = get_line().parse().unwrap();

    let p: Vec<i64> = get_line().split(" ").map(|x| x.parse().unwrap()).collect();
    let mut cp: Vec<i64> = vec![0; p.len()];

    get_line();

    let mut infl: i64 = 0;
    let mut sum: i64 = p.iter().sum();

    while let Some(Ok(line)) = &input.next() {
        let mut parts = line.split_whitespace();
        let c = parts.next().unwrap();
        let x = parts.next().unwrap().parse::<i64>().unwrap();
        match c {
            "INFLATION" => {
                infl += x;
                sum += x * n;
            }
            "SET" => {
                let y: i64 = parts.next().unwrap().parse().unwrap();
                for (i, elem) in p.iter().enumerate() {
                    if elem + infl + cp[i] == x {
                        cp[i] += y - x;
                        sum += y - x;
                    }
                }
            }
            _ => panic!("Bad input"),
        }
        println!("{sum}")
    }
}
