all:
	g++ -std=c++14 -o test.bin MergeSort.h main.cpp

debug:
	g++ -std=c++14 -g -o test.elf MergeSort.h main.cpp

clean:
	rm test.bin test.elf