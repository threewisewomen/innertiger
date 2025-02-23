#include <iostream>
#include <vector>
int main() {
    int n;
    std::cout << "Enter the number of elements" << std::endl;
    std::cin >> n;
    std::vector<int> arr(n);
    std::cout << "Enter the elements" << std::endl;
    for(int i = 0;i < n;i++) {
        std::cin >> arr[i];
    }
    int temp = 0;
    for(int i = 0; i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    
    }

        // Optionally, print the elements to verify
        std::cout << "The elements are: ";
        for(int i = 0; i < n; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    std::cout << "Enter the kth element" << std::endl;

    int k;
    do{
        std::cin >> k;
        if(k > n)
        {
            std::cout << "Enter a valid k" << std::endl;
        }
    }while(k > n);
    std::cout << "The kth element is " << arr[k+1] << std::endl;
    
    return 0;

}
