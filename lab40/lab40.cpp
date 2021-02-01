#include <iostream>
#include <cmath>

int main() {
    std::cout << "Task 1" << std::endl;
	std::cout << "Hello, world!" << std::endl;

	std::cout << std::endl << "Task 2" << std::endl;
	double a, b;
    std::cin >> a >> b;
    std::cout << pow((pow(a, 2) + pow(b, 2)), 0.5) << std::endl;

    std::cout << std::endl << "Task 3" << std::endl;
    int k;
    std::cin >> k;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl << "Task 4" << std::endl;
    int m;
    std::cin >> m;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < i + 1; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl << "Task 5" << std::endl;
    int l;
    std::cin >> l;
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l - i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl << "Task 6" << std::endl;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= n - 2 * i; j++) {
            std::cout << "*";
        }
        for (int j = 1; j <= i; j++) {
            std::cout << " ";
        }
        std::cout << std::endl;
        if (2*i + 2 > n){
            break;
        }
    }

	return 0;
}
