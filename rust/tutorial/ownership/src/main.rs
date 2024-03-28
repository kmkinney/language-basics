#![allow(unused_variables)]
fn main() {
    println!("Ownership and Borrowing");
    {
        let x = 5;
    }
    // x; invalid

    // String types
    let literal = "Hello, world!";
    let s = String::from("Hello, world!");

    // Mutability
    let mut s = String::from("Hello, ");
    s.push_str("world!");

    // Move (like shallow copy, but invalidates the original)
    let s1 = String::from("Hello");
    let s2 = s1;
    // s1; invalid
    print!("{s2}"); //valid
}
