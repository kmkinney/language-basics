use std::io::{stdin, stdout, Write};

fn main() {
    // Game loop
    loop {
        prompt();
        let mut s = String::new();
        stdin().read_line(&mut s).unwrap();

        if s.starts_with("q") {
            break;
        }
        let guess: u32 = match s.trim().parse() {
            Ok(x) => x,
            Err(_) => {
                println!("Enger a valid number");
                continue;
            }
        };

        match guess {
            7 => {
                println!("You win!");
                break;
            }
            _ => println!("Try again"),
        }
    }
}

fn prompt() {
    println!("Play a guessing game!");
    println!("To quit, type (q)");
    print!("Enter a number: ");
    stdout().flush().unwrap();
}
