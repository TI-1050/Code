#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		switch(n) {
			case 1 :
				puts("2\n0\n1");
				break;	
			case 2 :
				puts("3");
				for (auto it : {"00", "01", "11"}) {
					puts(it);
				}
				break;
			case 3 :
				puts("5");
				for (auto it : {"000", "001", "011", "111", "110"}) {
					puts(it);
				}
				break;
			case 4 :
				puts("8");
				for (auto it : {"0000", "0001", "0011", "0111", "0110", "1110", "1100", "1101"}) {
					puts(it);
				}
				break;
			case 5 :
				puts("14");
				for (auto it : {"00000", "10000", "11000", "11100", "11110", "01110", "00110", "00111", "10111", "10011", "11011", "01011", "01001", "01101"}) {
					puts(it);
				}
				break;
			case 6 :
				puts("27");
				for (auto it : { "000000", "100000", "110000", "111000", "111100", "101100", "001100", "001110", "001010", "101010", "101011", "101001", "001001", "011001", "011101", "011111", "111111", "110111", "110101", "100101", "000101", "000111", "000011", "010011", "010010", "010110", "010100"}) {
					puts(it);			
				}
				break;
		}
	}
	return 0;
}
