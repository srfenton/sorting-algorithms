#include <iostream>

void bubble_sort(int arr[], int n) {
  sorted_array[] = {};  
  int min = arr[0]
  for (int i = 0; i < n - 1; i++) {
    for(int j = 0; j < n - i - 1; j++) {
      if(i>j){
        min = j;

      }

    }    
  }
} 

void print_array(int arr[], int n){
  for(int i = 0; i < n; i++){
    std::cout << arr[i] << std::endl;
  }
}


int main() {
  int driver_array[] = {1, 8, 6, 5, 4, 9, 9, 4, 5};
  int size = sizeof(driver_array) / sizeof(driver_array[0]);
  selection_sort(driver_array, size);
  print_array(driver_array, size);
  return 0;
}
