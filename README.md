# leetcode-cpp

> <p style = "color:red"><strong>Please note that:</strong> my solutions are not necessarily optimized for efficiency in terms of time complexity or memory consumption. Instead, my focus is on providing solutions that are clear, and are easy for others to understand and learn from.</p>

I know these problems can be challenging, and I hope these solutions help guide anyone who is struggling to find their own solutions.

## Progress

**Blind 75: 76/250**

## Project Structure

```
leetcode-cpp/
├── src/                    # Solution implementations (header files)
│   ├── 1d-dynamic-programming/
│   ├── 2d-dynamic-programming/
│   ├── arrays-hashing/
│   ├── ...
│   ├── trees/
│   ├── tries/
│   └── two-pointers/
├── test/                   # Google Test unit tests
│   ├── 1d-dynamic-programming/
│   ├── 2d-dynamic-programming/
│   ├── arrays-hashing/
│   ├── ...
│   ├── trees/
│   ├── tries/
│   └── two-pointers/
├── third_party/            # External dependencies (Google Test)
└── scripts/                # Utility scripts (formatting, linting)
```

## Building and Testing

### Prerequisites

- C++23 compatible compiler (e.g., GCC 11+, Clang 12+, MSVC 19.29+)
- CMake 4.2.1 or higher
- Make (optional, for using Makefile shortcuts)

### Install Dependencies

```bash
./install_dependencies.sh
```

### Build

```bash
# Using Make
make build

# Or using CMake directly
mkdir -p build
cd build
cmake ..
cmake --build .
```

### Run Tests

Run a specific test:

```bash
make 0001_two_sum_test
make 0001
```

Run all tests:

```bash
make check-tests
```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Categories

### Array & Hashing (8/8)

| No   | Title                                                                                                                            | Solution                                                                                                                                          | Difficulty |
| ---- | -------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------- | ---------- |
| 0217 | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/description/)                                             | <sub><div align='center'>[✔️](src/arrays-hashing/0217_contains_duplicate.h)</div></sub>                                                           | Easy       |
| 0242 | [Valid Anagram](https://leetcode.com/problems/valid-anagram/description/)                                                        | <sub><div align='center'>[✔️](src/arrays-hashing/0242_valid_anagram.h)</div></sub>                                                                | Easy       |
| 0001 | [Two Sum](https://leetcode.com/problems/two-sum/description/)                                                                    | <sub><div align='center'>[✔️](src/arrays-hashing/0001_two_sum.h)</div></sub>                                                                      | Easy       |
| 0049 | [Group Anagrams](https://leetcode.com/problems/group-anagrams/description/)                                                      | <sub><div align='center'>[✔️](src/arrays-hashing/0049_group_anagrams.h)</div></sub>                                                               | Medium     |
| 0347 | [Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/description/)                                   | <sub><div align='center'>[✔️](src/arrays-hashing/0347_top_k_frequent_elements.h)</div></sub>                                                      | Medium     |
| 0271 | [Encode and Decode Strings](https://leetcode.com/problems/encode-and-decode-strings/description/)                               | <sub><div align='center'>[✔️](src/arrays-hashing/0271_encode_and_decode_strings.h)</div></sub>                                                    | Medium     |
| 0238 | [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/description/)                         | <sub><div align='center'>[✔️](src/arrays-hashing/0238_product_of_array_except_self.h)</div></sub>                                                 | Medium     |
| 0128 | [Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/description/)                         | <sub><div align='center'>[✔️](src/arrays-hashing/0128_longest_consecutive_sequence.h)</div></sub>                                                 | Medium     |

### Two Pointers (4/4)

| No   | Title                                                                                                                            | Solution                                                                                                                                            | Difficulty |
| ---- | -------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------- | ---------- |
| 0125 | [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/description/)                                                  | <sub><div align='center'>[✔️](src/two-pointers/0125_valid_palindrome.h)</div></sub>                                                                 | Easy       |
| 0167 | [Two Sum II - Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/)               | <sub><div align='center'>[✔️](src/two-pointers/0167_two_sum_ii_input_array_is_sorted.h)</div></sub>                                                 | Medium     |
| 0015 | [3Sum](https://leetcode.com/problems/3sum/description/)                                                                          | <sub><div align='center'>[✔️](src/two-pointers/0015_3sum.h)</div></sub>                                                                             | Medium     |
| 0011 | [Container With Most Water](https://leetcode.com/problems/container-with-most-water/description/)                               | <sub><div align='center'>[✔️](src/two-pointers/0011_container_with_most_water.h)</div></sub>                                                        | Medium     |

### Sliding Window (4/4)

| No   | Title                                                                                                                                              | Solution                                                                                                                                                                            | Difficulty |
| ---- | -------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------- | ---------- |
| 0121 | [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/)                                     | <sub><div align='center'>[✔️](src/sliding-window/0121_best_time_to_buy_and_sell_stock.h)</div></sub>                | Easy       |
| 0003 | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/description/)       | <sub><div align='center'>[✔️](src/sliding-window/0003_longest_substring_without_repeating_characters.h)</div></sub> | Medium     |
| 0424 | [Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement/description/)                     | <sub><div align='center'>[✔️](src/sliding-window/0424_longest_repeating_character_replacement.h)</div></sub>        | Medium     |
| 0076 | [Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/description/)                                                   | <sub><div align='center'>[✔️](src/sliding-window/0076_minimum_window_substring.h)</div></sub>                       | Hard       |

### Stack (1/1)

| No   | Title                                                                                             | Solution                                                                                            | Difficulty |
| ---- | ------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------- | ---------- |
| 0020 | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/description/)                 | <sub><div align='center'>[✔️](src/stack/0020_valid_parentheses.h)</div></sub>                       | Easy       |

### Binary Search (2/2)

| No   | Title                                                                                                                            | Solution                                                                                                                                                 | Difficulty |
| ---- | -------------------------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------- |
| 0153 | [Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/)         | <sub><div align='center'>[✔️](src/binary-search/0153_find_minimum_in_rotated_sorted_array.h)</div></sub>                                                 | Medium     |
| 0033 | [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/description/)                     | <sub><div align='center'>[✔️](src/binary-search/0033_search_in_rotated_sorted_array.h)</div></sub>                                                       | Medium     |

### Linked List (6/6)

| No   | Title                                                                                                                            | Solution                                                                                                                                                   | Difficulty |
| ---- | -------------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------- |
| 0206 | [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/description/)                                           | <sub><div align='center'>[✔️](src/linked-list/0206_reverse_linked_list.h)</div></sub>                                                                      | Easy       |
| 0021 | [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/description/)                                     | <sub><div align='center'>[✔️](src/linked-list/0021_merge_two_sorted_lists.h)</div></sub>                                                                   | Easy       |
| 0141 | [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/description/)                                               | <sub><div align='center'>[✔️](src/linked-list/0141_linked_list_cycle.h)</div></sub>                                                                        | Easy       |
| 0143 | [Reorder List](https://leetcode.com/problems/reorder-list/description/)                                                         | <sub><div align='center'>[✔️](https://leetcode.com/problems/reorder-list/)</div></sub>                                                                     | Medium     |
| 0019 | [Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/)                 | <sub><div align='center'>[✔️](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)</div></sub>                                                 | Medium     |
| 0023 | [Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/description/)                                         | <sub><div align='center'>[✔️](src/linked-list/0023_merge_k_sorted_lists.h)</div></sub>                                                                     | Hard       |

### Trees (11/11)

| No   | Title                                                                                                                                                                       | Solution                                                                                                                                                                              | Difficulty |
| ---- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------- |
| 0226 | [Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/description/)                                                                                        | <sub><div align='center'>[✔️](src/trees/0226_invert_binary_tree.h)</div></sub>                                                                                                        | Easy       |
| 0104 | [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/description/)                                                                    | <sub><div align='center'>[✔️](src/trees/0104_maximum_depth_of_binary_tree.h)</div></sub>                                                                                              | Easy       |
| 0100 | [Same Tree](https://leetcode.com/problems/same-tree/description/)                                                                                                           | <sub><div align='center'>[✔️](src/trees/0100_same_tree.h)</div></sub>                                                                                                                 | Easy       |
| 0572 | [Subtree of Another Tree](https://leetcode.com/problems/subtree-of-another-tree/description/)                                                                              | <sub><div align='center'>[✔️](src/trees/0572_subtree_of_another_tree.h)</div></sub>                                                                                                   | Easy       |
| 0235 | [Lowest Common Ancestor of a Binary Search Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/description/)                               | <sub><div align='center'>[✔️](src/trees/0235_lowest_common_ancestor_of_a_binary_search_tree.h)</div></sub>                                                                            | Medium     |
| 0102 | [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/description/)                                                          | <sub><div align='center'>[✔️](src/trees/0102_binary_tree_level_order_traversal.h)</div></sub>                                                                                         | Medium     |
| 0098 | [Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/description/)                                                                      | <sub><div align='center'>[✔️](src/trees/0098_validate_binary_search_tree.h)</div></sub>                                                                                               | Medium     |
| 0230 | [Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/description/)                                                                  | <sub><div align='center'>[✔️](src/trees/0230_kth_smallest_element_in_a_bst.h)</div></sub>                                                                                             | Medium     |
| 0105 | [Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/description/)          | <sub><div align='center'>[✔️](src/trees/0105_construct_binary_tree_from_preorder_and_inorder_traversal.h)</div></sub>                                                                 | Medium     |
| 0124 | [Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/description/)                                                                    | <sub><div align='center'>[✔️](src/trees/0124_binary_tree_maximum_path_sum.h)</div></sub>                                                                                              | Hard       |
| 0297 | [Serialize and Deserialize Binary Tree](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/description/)                                                  | <sub><div align='center'>[✔️](src/trees/0297_serialize_and_deserialize_binary_tree.h)</div></sub>                                                                                     | Hard       |

### Heap / Priority Queue (1/1)

| No   | Title                                                                                                              | Solution                                                                                                                                               | Difficulty |
| ---- | ------------------------------------------------------------------------------------------------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------ | ---------- |
| 0295 | [Find Median from Data Stream](https://leetcode.com/problems/find-median-from-data-stream/description/)           | <sub><div align='center'>[✔️](src/heap-priority-queue/0295_find_median_from_data_stream.h)</div></sub>                                                 | Hard       |

### Backtracking (2/2)

| No   | Title                                                                                              | Solution                                                                                            | Difficulty |
| ---- | -------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------- | ---------- |
| 0039 | [Combination Sum](https://leetcode.com/problems/combination-sum/description/)                      | <sub><div align='center'>[✔️](src/backtracking/0039_combination_sum.h)</div></sub>                  | Medium     |
| 0079 | [Word Search](https://leetcode.com/problems/word-search/description/)                              | <sub><div align='center'>[✔️](src/backtracking/0079_word_search.h)</div></sub>                      | Medium     |

### Tries (3/3)

| No   | Title                                                                                                                                            | Solution                                                                                                                                               | Difficulty |
| ---- | ------------------------------------------------------------------------------------------------------------------------------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------ | ---------- |
| 0208 | [Implement Trie](https://leetcode.com/problems/implement-trie-prefix-tree/description/)                                                         | <sub><div align='center'>[✔️](src/tries/0208_implement_trie.h)</div></sub>                                                                             | Medium     |
| 0211 | [Design Add and Search Words Data Structure](https://leetcode.com/problems/design-add-and-search-words-data-structure/description/)             | <sub><div align='center'>[✔️](src/tries/0211_design_add_and_search_words_data_structure.h)</div></sub>                                                 | Medium     |
| 0212 | [Word Search II](https://leetcode.com/problems/word-search-ii/description/)                                                                     | <sub><div align='center'>[✔️](src/tries/0212_word_search_ii.h)</div></sub>                                                                             | Hard       |

### Graphs (6/6)

| No   | Title                                                                                                                                                    | Solution                                                                                                                                                           | Difficulty |
| ---- | -------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------ | ---------- |
| 0200 | [Number of Islands](https://leetcode.com/problems/number-of-islands/description/)                                                                       | <sub><div align='center'>[✔️](src/graphs/0200_number_of_islands.h)</div></sub>                                                                                     | Medium     |
| 0133 | [Clone Graph](https://leetcode.com/problems/clone-graph/description/)                                                                                   | <sub><div align='center'>[✔️](src/graphs/0133_clone_graph.h)</div></sub>                                                                                           | Medium     |
| 0417 | [Pacific Atlantic Water Flow](https://leetcode.com/problems/pacific-atlantic-water-flow/description/)                                                   | <sub><div align='center'>[✔️](src/graphs/0417_pacific_atlantic_water_flow.h)</div></sub>                                                                           | Medium     |
| 0207 | [Course Schedule](https://leetcode.com/problems/course-schedule/description/)                                                                           | <sub><div align='center'>[✔️](src/graphs/0207_course_schedule.h)</div></sub>                                                                                       | Medium     |
| 0261 | [Graph Valid Tree](https://leetcode.com/problems/graph-valid-tree/description/)                                                                         | <sub><div align='center'>[✔️](src/graphs/0261_graph_valid_tree.h)</div></sub>                                                                                      | Medium     |
| 0323 | [Number of Connected Components in Undirected Graph](https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/description/) | <sub><div align='center'>[✔️](src/graphs/0323_number_of_connected_components_in_an_undirected_graph.h)</div></sub>                                                 | Medium     |

### Advanced Graphs (1/1)

| No   | Title                                                                                          | Solution                                                                                                    | Difficulty |
| ---- | ---------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------- | ---------- |
| 0269 | [Alien Dictionary](https://leetcode.com/problems/alien-dictionary/description/)               | <sub><div align='center'>[✔️](src/advanced-graphs/0269_alien_dictionary.h)</div></sub>                      | Hard       |

### 1-D Dynamic Programming (10/10)

| No   | Title                                                                                                                              | Solution                                                                                                                                            | Difficulty |
| ---- | ---------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------- | ---------- |
| 0070 | [Climbing Stairs](https://leetcode.com/problems/climbing-stairs/description/)                                                     | <sub><div align='center'>[✔️](src/1d-dynamic-programming/0070_climbing_stairs.h)</div></sub>                                                        | Easy       |
| 0198 | [House Robber](https://leetcode.com/problems/house-robber/description/)                                                           | <sub><div align='center'>[✔️](src/1d-dynamic-programming/0198_house_robber.h)</div></sub>                                                           | Medium     |
| 0213 | [House Robber II](https://leetcode.com/problems/house-robber-ii/description/)                                                     | <sub><div align='center'>[✔️](src/1d-dynamic-programming/0213_house_robber_ii.h)</div></sub>                                                        | Medium     |
| 0005 | [Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/description/)                        | <sub><div align='center'>[✔️](src/1d-dynamic-programming/0005_longest_palindromic_substring.h)</div></sub>                                          | Medium     |
| 0647 | [Palindromic Substrings](https://leetcode.com/problems/palindromic-substrings/description/)                                       | <sub><div align='center'>[✔️](src/1d-dynamic-programming/0647_palindromic_substrings.h)</div></sub>                                                 | Medium     |
| 0091 | [Decode Ways](https://leetcode.com/problems/decode-ways/description/)                                                             | <sub><div align='center'>[✔️](src/1d-dynamic-programming/0091_decode_ways.h)</div></sub>                                                            | Medium     |
| 0322 | [Coin Change](https://leetcode.com/problems/coin-change/description/)                                                             | <sub><div align='center'>[✔️](src/1d-dynamic-programming/0322_coin_change.h)</div></sub>                                                            | Medium     |
| 0152 | [Maximum Product Subarray](https://leetcode.com/problems/maximum-product-subarray/description/)                                   | <sub><div align='center'>[✔️](src/1d-dynamic-programming/0152_maximum_product_subarray.h)</div></sub>                                               | Medium     |
| 0139 | [Word Break](https://leetcode.com/problems/word-break/description/)                                                               | <sub><div align='center'>[✔️](src/1d-dynamic-programming/0139_word_break.h)</div></sub>                                                             | Medium     |
| 0300 | [Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/description/)                      | <sub><div align='center'>[✔️](src/1d-dynamic-programming/0300_longest_increasing_subsequence.h)</div></sub>                                         | Medium     |

### 2-D Dynamic Programming (2/2)

| No   | Title                                                                                                                    | Solution                                                                                                                                                | Difficulty |
| ---- | ------------------------------------------------------------------------------------------------------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------- |
| 0062 | [Unique Paths](https://leetcode.com/problems/unique-paths/description/)                                                 | <sub><div align='center'>[✔️](src/2d-dynamic-programming/0062_unique_paths.h)</div></sub>                                                               | Medium     |
| 1143 | [Longest Common Subsequence](https://leetcode.com/problems/longest-common-subsequence/description/)                    | <sub><div align='center'>[✔️](src/2d-dynamic-programming/1143_longest_common_subsequence.h)</div></sub>                                                 | Medium     |

### Greedy (2/2)

| No   | Title                                                                                          | Solution                                                                                            | Difficulty |
| ---- | ---------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------- | ---------- |
| 0053 | [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/description/)               | <sub><div align='center'>[✔️](src/greedy/0053_maximum_subarray.h)</div></sub>                       | Medium     |
| 0055 | [Jump Game](https://leetcode.com/problems/jump-game/description/)                             | <sub><div align='center'>[✔️](src/greedy/0055_jump_game.h)</div></sub>                              | Medium     |

### Intervals (5/5)

| No   | Title                                                                                                              | Solution                                                                                                      | Difficulty |
| ---- | ------------------------------------------------------------------------------------------------------------------ | ------------------------------------------------------------------------------------------------------------- | ---------- |
| 0057 | [Insert Interval](https://leetcode.com/problems/insert-interval/description/)                                     | <sub><div align='center'>[✔️](src/intervals/0057_insert_interval.h)</div></sub>                               | Medium     |
| 0056 | [Merge Intervals](https://leetcode.com/problems/merge-intervals/description/)                                     | <sub><div align='center'>[✔️](src/intervals/0056_merge_intervals.h)</div></sub>                               | Medium     |
| 0435 | [Non-overlapping Intervals](https://leetcode.com/problems/non-overlapping-intervals/description/)                 | <sub><div align='center'>[✔️](src/intervals/0435_non_overlapping_intervals.h)</div></sub>                     | Medium     |
| 0252 | [Meeting Rooms](https://leetcode.com/problems/meeting-rooms/description/)                                         | <sub><div align='center'>[✔️](src/intervals/0252_meeting_rooms.h)</div></sub>                                 | Easy       |
| 0253 | [Meeting Rooms II](https://leetcode.com/problems/meeting-rooms-ii/description/)                                   | <sub><div align='center'>[✔️](src/intervals/0253_meeting_rooms_ii.h)</div></sub>                              | Medium     |

### Math & Geometry (3/3)

| No   | Title                                                                                                  | Solution                                                                                                    | Difficulty |
| ---- | ------------------------------------------------------------------------------------------------------ | ----------------------------------------------------------------------------------------------------------- | ---------- |
| 0048 | [Rotate Image](https://leetcode.com/problems/rotate-image/description/)                               | <sub><div align='center'>[✔️](src/math-geometry/0048_rotate_image.h)</div></sub>                            | Medium     |
| 0054 | [Spiral Matrix](https://leetcode.com/problems/spiral-matrix/description/)                             | <sub><div align='center'>[✔️](src/math-geometry/0054_spiral_matrix.h)</div></sub>                           | Medium     |
| 0073 | [Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/description/)                     | <sub><div align='center'>[✔️](src/math-geometry/0073_set_matrix_zeroes.h)</div></sub>                       | Medium     |

### Bit Manipulation (5/5)

| No   | Title                                                                                                  | Solution                                                                                                          | Difficulty |
| ---- | ------------------------------------------------------------------------------------------------------ | ----------------------------------------------------------------------------------------------------------------- | ---------- |
| 0191 | [Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/description/)                       | <sub><div align='center'>[✔️](src/bit-manipulation/0191_number_of_1_bits.h)</div></sub>                           | Easy       |
| 0338 | [Counting Bits](https://leetcode.com/problems/counting-bits/description/)                             | <sub><div align='center'>[✔️](src/bit-manipulation/0338_counting_bits.h)</div></sub>                             | Easy       |
| 0190 | [Reverse Bits](https://leetcode.com/problems/reverse-bits/description/)                               | <sub><div align='center'>[✔️](src/bit-manipulation/0190_reverse_bits.h)</div></sub>                              | Easy       |
| 0268 | [Missing Number](https://leetcode.com/problems/missing-number/description/)                           | <sub><div align='center'>[✔️](src/bit-manipulation/0268_missing_number.h)</div></sub>                            | Easy       |
| 0371 | [Sum of Two Integers](https://leetcode.com/problems/sum-of-two-integers/description/)                 | <sub><div align='center'>[✔️](src/bit-manipulation/0371_sum_of_two_integers.h)</div></sub>                       | Medium     |
