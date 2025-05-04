#include <iostream>
#include <unordered_map>
using namespace std;

long long subarraySum(int nums[], int size, long long k) {
    unordered_map<long long, int> prefix_sum_freq;
    prefix_sum_freq[0] = 1;

    long long current_sum = 0;
    long long count = 0;

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
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int size;
    long long k;
    cin >> size >> k;

    int* nums = new int[size];
    for (int i = 0; i < size; ++i) {
        cin >> nums[i];
    }

    cout << subarraySum(nums, size, k) << "\n";

    delete[] nums;
    return 0;
}
