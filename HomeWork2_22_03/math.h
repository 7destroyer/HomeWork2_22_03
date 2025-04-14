#ifndef MATH_H
#define MATH_H

class Math {
public:
	inline int add(int a, int b) {
		return a + b;
	}

	inline int subtract(int a, int b) {
		return a - b;
	}

	inline int max(int a, int b) {
		return (a > b) ? a : b;
	}
};

#endif
