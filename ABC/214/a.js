function main(input) {
  var a = input;
  if (a >= 1 && a <= 125) {
    console.log(4);
  } else if (a >= 126 && a <= 211) {
    console.log(6);
  } else {
    console.log(8);
  }
}

main(require("fs").readFileSync("/dev/stdin", "utf8"));
