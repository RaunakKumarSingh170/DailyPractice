#include <iostream>

long long factorial(int n) {
    // 1. Base Case (Step 4 in the trace: n = 1)
    if (n == 1) {
        std::cout << "Base Case reached: returning 1" << std::endl;
        return 1;
    }
    
    // Recursive Step (Steps 1, 2, 3 in the trace: n > 1)
    // long long result_of_smaller_call = factorial(n - 1); 
    
    // Unwinding and Calculation (Steps 5, 6, 7 in the trace)
    long long final_result = n *factorial(n-1);
    
    std::cout << "Unwinding: factorial(" << n << ") uses " 
            //   << n << " * " << result_of_smaller_call 
              << " to return " << final_result << std::endl;
              
    return final_result;
}

int main() {
    int num = 4;
    std::cout << "Calculating " << num << "!" << std::endl;
    long long result = factorial(num); // This is the initial call (Step 1)
    std::cout << "Result: " << result << std::endl;
    return 0;
}