gcc main.c -o main.program || exit 1
gcc Number_Analyzer.c -o number_analyzer || exit 1

./main.program > output.txt

grep -q "Hello, GitHub!" output.txt || exit 1
grep -q "Hello World" output.txt || exit 1


printf '1\n2\n3\n4\n5\n' | ./number_analyzer > output.txt

grep -q "sum = 15" output.txt || exit 1
grep -q "max = 5" output.txt || exit 1
grep -q "min = 1" output.txt || exit 1

echo "All test passed!"
