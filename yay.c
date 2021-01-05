#include <stdlib.h>

int main() {
	int x = 2;
	x = x++ + x++ * x--;
	//  2.3 + 3.4 * 4.3
	//  2   + 3   * 4
	//  2   + 12
	//  
	printf("%d\n",x);
}
