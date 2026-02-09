#pragma once

#include <vector>

using std::vector;

class MyHashSet {
 private:
  static const int SIZE = 1000;
  vector<vector<int>> buckets;

  int hash(int key) {
    return key % SIZE;
  }

 public:
  // Time: O(1) average | Space: O(n)
  MyHashSet() : buckets(SIZE) {}

  // Time: O(1) average | Space: O(1)
  void add(int key) {
    int idx = hash(key);
    // Check if key already exists
    for (int val : buckets[idx]) {
      if (val == key) {
        return;
      }
    }
    // Add key if it doesn't exist
    buckets[idx].push_back(key);
  }

  // Time: O(1) average | Space: O(1)
  void remove(int key) {
    int idx = hash(key);
    // Find and remove the key
    for (auto it = buckets[idx].begin(); it != buckets[idx].end(); ++it) {
      if (*it == key) {
        buckets[idx].erase(it);
        return;
      }
    }
  }

  // Time: O(1) average | Space: O(1)
  bool contains(int key) {
    int idx = hash(key);
    // Check if key exists in the bucket
    for (int val : buckets[idx]) {
      if (val == key) {
        return true;
      }
    }
    return false;
  }
};
