#![allow(dead_code)]
use std::io::{self, BufRead};

fn main() {}

/// Reads all the lines in stdin into a vector
fn read_lines() -> Vec<String> {
    io::stdin()
        .lock()
        .lines()
        .map(|line| line.unwrap())
        .collect()
}

fn read_nums() -> Vec<isize> {
    io::stdin()
        .lock()
        .lines()
        .next()
        .unwrap()
        .unwrap()
        .split(" ")
        .map(|x| x.parse().unwrap())
        .collect()
}

fn read_int() -> i64 {
    io::stdin()
        .lock()
        .lines()
        .next()
        .unwrap()
        .unwrap()
        .parse()
        .unwrap()
}
