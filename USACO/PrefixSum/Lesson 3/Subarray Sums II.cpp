#include <iostream>
#include <map>
using namespace std;

long long subarraySum(int nums[], int size, long long k) {
    map<long long, int> prefix_sum_freq;
    prefix_sum_freq[0] = 1;

    long long current_sum = 0;
    long long count = 0;

    for (int i = 0; i < size; ++i) {
        current_sum += nums[i];
        count += prefix_sum_freq[current_sum - k];
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
