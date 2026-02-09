#pragma once

#include <utility>
#include <vector>

using std::pair;
using std::vector;

class MyHashMap {
 private:
  static const int SIZE = 1000;
  vector<vector<pair<int, int>>> buckets;

  int hash(int key) {
    return key % SIZE;
  }

 public:
  // Time: O(1) average | Space: O(n)
  MyHashMap() : buckets(SIZE) {}

  // Time: O(1) average | Space: O(1)
  void put(int key, int value) {
    int idx = hash(key);
    // Check if key already exists and update value
    for (auto& [k, v] : buckets[idx]) {
      if (k == key) {
        v = value;
        return;
      }
    }
    // Add new key-value pair if key doesn't exist
    buckets[idx].push_back({key, value});
  }

  // Time: O(1) average | Space: O(1)
  int get(int key) {
    int idx = hash(key);
    // Find and return the value for the key
    for (const auto& [k, v] : buckets[idx]) {
      if (k == key) {
        return v;
      }
    }
    // Return -1 if key not found
    return -1;
  }

  // Time: O(1) average | Space: O(1)
  void remove(int key) {
    int idx = hash(key);
    // Find and remove the key-value pair
    for (auto it = buckets[idx].begin(); it != buckets[idx].end(); ++it) {
      if (it->first == key) {
        buckets[idx].erase(it);
        return;
      }
    }
  }
};
