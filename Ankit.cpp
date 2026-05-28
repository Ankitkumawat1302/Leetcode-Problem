// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<climits>

// using namespace std;

// int main(){
//     vector<int> nums = {5,1,5,2,5,3,5,4};
//     vector<int> arr(10, 0);
// int number;
//     int n = nums.size();
//     int maxCount = 0;
//     int mode = 0;
//     for(int i = 0; i < n; i++){
//          if(arr[i] > maxCount){
//           maxCount = arr[i];
//           mode = i;
//          }
//     }
//     cout << maxCount << endl;
//     cout << mode << endl;
//      //  for(int i = 0 ; i < 10 ; i++){
//     //     cout << arr[i] << endl;
//     //  }
//     // int maxCount = *max_element(arr.begin(), arr.end());
//     // cout << "max frequency: " << maxCount << endl;
// } 
// }
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

int main(){
    vector<int> nums = {5,1,5,2,5,3,5,4};
    vector<int> arr(10, 0);
    int n = nums.size();

    for(int i = 0; i < n; i++){
        int number = nums[i];
        arr[number]++;
    }

    int maxCount = 0;
    int mode = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > maxCount){
            maxCount = arr[i];
            mode = i;
        }
    }

    cout << maxCount << endl;
    cout << mode << endl;
     //  for(int i = 0 ; i < 10 ; i++){
    //     cout << arr[i] << endl;
    //  }
    // int maxCount = *max_element(arr.begin(), arr.end());
    // cout << "max frequency: " << maxCount << endl;
    
}