#include<iostream>

// Data: A simple integer variable
int a = 13;

int main() {
    // We declare the first pointer `p1` which stores the address of `a`
    int *p1 = &a;
    
    // Then we declare a pointer `p2` that points to `p1` (a pointer to a pointer)
    int **p2 = &p1;
    
    // Display the address and value pointed to by the first pointer `p1`
    std::cout << "The address of the value pointed by the first pointer is: " << p1 
              << " and its value is: " << *p1 << std::endl;
    
    // Display the address and value of the pointer `p1` (pointed by `p2`)
    // Note that `p2` points to `p1`, so dereferencing `p2` once gives the address of `a`
    std::cout << "The address of the value pointed by the second pointer (p2) is: " << p2 
              << " and it points to address (p1): " << *p2 << std::endl;
    
    // Dereferencing `p2` twice (`**p2`) gives the value of `a`
    std::cout << "The value contained at the address pointed by the pointer pointed (p2) is: " 
              << **p2 << std::endl;

    // We could extend this chain of pointers, pointing to other pointers
    int ***p3 = &p2;  // `p3` points to `p2`
    int ****p4 = &p3; // `p4` points to `p3`
    int *****p5 = &p4; // `p5` points to `p4`
    
    // Display the value of `a` by dereferencing multiple times
    // Dereferencing `p3` three times (`***p3`) gets us back to `a`, and so on for `p4` and `p5`
    std::cout << "As you can see, the value pointed at the top is always the same: " 
              << ***p3 << ", " << ****p4 << ", " << *****p5 << std::endl;
    
    return 0;
}
