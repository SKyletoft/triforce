use ansi_term::Colour;

const TRIANGLE: &str = "◢◣";

fn main() {
	let arg = std::env::args().nth(1);
	let (top, left, right) = match arg.as_deref() {
		Some("z" | "zelda") => (Colour::Yellow, Colour::Blue, Colour::Yellow),
		Some("g" | "ganon" | "ganondorf") => (Colour::Red, Colour::Yellow, Colour::Yellow),
		Some("l" | "link") => (Colour::Yellow, Colour::Yellow, Colour::Green),
		_ => (Colour::Yellow, Colour::Yellow, Colour::Yellow),
	};
	println!(
		" {}\n{}{}",
		top.paint(TRIANGLE),
		left.paint(TRIANGLE),
		right.paint(TRIANGLE)
	);
}
