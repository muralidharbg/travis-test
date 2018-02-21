all:
	g++ hello_world.c -o hello_world

test1: 
	./hello_world < input1.txt > output1.txt
	diff test1.expected output1.txt

test2: 
	./hello_world < input2.txt > output2.txt
	diff test2.expected output2.txt || cat output2.txt 

clean:
	rm hello_world output*.txt
