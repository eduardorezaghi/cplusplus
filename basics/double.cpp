#include <iostream>
using namespace std;


double square(double x) {
    return x*x;
}


void print_square(double x) {
    cout << "The square of " << x << " is " << square(x) << "\n";
}


int main(int argc, char const *argv[])
{
    print_square(1.234);
    return 0;
}
