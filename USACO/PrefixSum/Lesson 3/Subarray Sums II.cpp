#include <iostream>
#include <unordered_map>
using namespace std;

int subarraySum(int nums[], int size, int k) {
    if (nums == nullptr || size <= 0) return 0;

    unordered_map<long long, int> prefix_sum_freq;
    prefix_sum_freq[0] = 1;

    long long current_sum = 0;
    int count = 0;

    for (int i = 0; i < size; ++i) {
        current_sum += nums[i];
        long long target = current_sum - k;

        if (prefix_sum_freq.count(target)) {
            count += prefix_sum_freq[target];
        }

        prefix_sum_freq[current_sum]++;
    }

    return count;
}

int main() {
    int size, k;
    cin >> size  >> k;

    int nums[size];
    for (int i = 0; i < size; ++i) {
        cin >> nums[i];
    }
    
    int result = subarraySum(nums, size, k);
    cout << result << endl;

    return 0;
}
