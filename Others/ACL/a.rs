use std::io;

fn main() {
    let mut k = String::new();
    io::stdin()
        .read_line(&mut k)
        .expect("Fialed to read line");
    let k: u32 = k.trim()
        .parse()
        .expect("Fialed conversion");
    for _i in 0..k {
        print!("ACL");
    }
    println!();
}
