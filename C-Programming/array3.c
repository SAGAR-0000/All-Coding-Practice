#include <stdio.h>

int main() {
    // Example input array
    int height[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = sizeof(height) / sizeof(height[0]);

    int left = 0;
    int right = n - 1;
    int leftMax = 0;
    int rightMax = 0;
    int totalWater = 0;

    while (left < right) {
        if (height[left] < height[right]) {

            if (height[left] >= leftMax) {
                leftMax = height[left]; 
            } else {
                totalWater += (leftMax - height[left]); 
            }
            left++;
        } else {
    
            if (height[right] >= rightMax) {
                rightMax = height[right];
            } else {
                totalWater += (rightMax - height[right]); 
            }
            right--;
        }
    }

    printf("Total water trapped: %d units\n", totalWater);

    return 0;
}