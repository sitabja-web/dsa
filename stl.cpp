// # STL Components in C++

// You listed some of the most important STL containers and algorithms.
// Here’s a structured explanation of each one.

// ---

// # 1. `vector`

// Dynamic array.

// Header:

// ```cpp id="wnp2gs"
// #include <vector>
// ```

// ## Features

// * Dynamic resizing
// * Fast random access
// * Contiguous memory

// ## Complexity

// | Operation     | Complexity   |
// | ------------- | ------------ |
// | Access        | O(1)         |
// | push_back     | O(1) average |
// | Insert middle | O(n)         |

// ## Example

// ```cpp id="lbm1l9"
// vector<int> v = {1,2,3};

// v.push_back(4);

// for(auto x : v)
//     cout << x;
// ```



// # 2. `set`

// Stores unique sorted elements.

// Implemented using balanced BST (Red-Black Tree).

// #include <set>

// Features

// * Unique elements only
// * Automatically sorted

// ## Complexity

// | Operation | Complexity |
// | --------- | ---------- |
// | Insert    | O(log n)  |
// | Find      | O(log n)  |

// Example
// set<int> s;

// s.insert(3);
// s.insert(1);
// s.insert(3);

// for(auto x : s)
// cout << x << " ";
// Output:

// 1 3




// multiset`

// Like `set`, but duplicates allowed.
// #include <set>

// ## Example


// multiset<int> ms;

// ms.insert(5);
// ms.insert(5);

// cout << ms.count(5);
// ```

// Output:


// 2


// 4 unordered_set`

// Hash table based unique storage.

// Header:


// ## Features

// * Unique elements
// * No sorting
// * Faster average operations

// ## Complexity

// | Operation | Complexity   |
// | --------- | ------------ |
// | Insert    | O(1) average |
// | Search    | O(1) average |



// # 5. `unordered_multiset`

// Duplicates allowed + hash table.

// Header:

// ```cpp id="9uoq8d"
// #include <unordered_set>
// ```

// ## Features

// * Duplicate elements
// * No order
// * Hash-based

// ---

// # 6. `map`

// Key-value pair storage in sorted order.

// Balanced BST internally.

// Header:

// ```cpp id="1l45tg"
// #include <map>
// ```

// ## Example

// ```cpp id="rk08pi"
// map<int,string> mp;

// mp[1] = "A";
// mp[2] = "B";
// ```

// ## Complexity

// | Operation     | Complexity |
// | ------------- | ---------- |
// | Insert/Search | O(log n)  |



// # 7. `multimap`

// Duplicate keys allowed.

// Header:

// ```cpp id="0f4xev"
// #include <map>
// ```

// ## Example

// ```cpp id="44tqzx"
// multimap<int,string> mm;

// mm.insert({1,"A"});
// mm.insert({1,"B"});
// ```

// ---

// 8. `unordered_map`

// Hash table version of map.

// Header:

// ```cpp id="5w1lxu"
// #include <unordered_map>
// ```

// ## Features

// * Key-value pairs
// * Fast average lookup
// * No sorting

// ## Complexity

// | Operation     | Complexity   |
// | ------------- | ------------ |
// | Insert/Search | O(1) average |



// 9 unordered_multimap`

// Hash table + duplicate keys.

// Header:

// ```cpp id="2e5dxy"
// #include <unordered_map>
// ```

// ---

// # 10. `queue`

// FIFO structure.

// Header:

// ```cpp id="5grmhp"
// #include <queue>
// ```

// ## Operations

// | Function | Work         |
// | -------- | ------------ |
// | push()   | Insert       |
// | pop()    | Remove front |
// | front()  | Access front |

// ## Example

// ```cpp id="j5mjlwm"
// queue<int> q;

// q.push(1);
// q.push(2);

// cout << q.front();
// ```

// ---

// # 11. `stack`

// LIFO structure.

// Header:

// ```cpp id="7w32vh"
// #include <stack>
// ```

// ## Operations

// | Function | Work       |
// | -------- | ---------- |
// | push()   | Insert     |
// | pop()    | Remove top |
// | top()    | Access top |

// ---

// # 12. `deque`

// Double-ended queue.

// Header:

// ```cpp id="68y7jx"
// #include <deque>
// ```

// ## Features

// * Insert/remove from both ends
// * Random access supported

// ## Example

// ```cpp id="jkswh9"
// deque<int> dq;

// dq.push_front(1);
// dq.push_back(2);
// ```

// ---

// # 13. `priority_queue`

// Heap implementation.

// Header:

// ```cpp id="6wyfgz"
// #include <queue>
// ```

// Default = max heap.

// ## Example

// ```cpp id="72vg1t"
// priority_queue<int> pq;

// pq.push(10);
// pq.push(30);

// cout << pq.top();
// ```

// Output:

// ```text id="4g4c4n"
// 30
// ```

// ## Min Heap

// ```cpp id="rghd9x"
// priority_queue<int, vector<int>, greater<int>> pq;
// ```

// ---

// # 14. `list`

// Doubly linked list.

// Header:

// ```cpp id="dg0kvl"
// #include <list>
// ```

// ## Features

// * Fast insertion/deletion
// * No random access

// ## Complexity

// | Operation     | Complexity |
// | ------------- | ---------- |
// | Insert/Delete | O(1)       |
// | Random access | O(n)       |

// ---

// # 15. `sort()`

// Sorts elements.

// Header:

// ```cpp id="ggv4hx"
// #include <algorithm>
// ```

// ## Complexity

// O(n\log n)

// ## Example

// ```cpp id="w25o12"
// sort(v.begin(), v.end());
// ```

// Descending:

// ```cpp id="pbrz72"
// sort(v.begin(), v.end(), greater<int>());
// ```

// ---

// # 16. `next_permutation()`

// Generates next lexicographical permutation.

// Header:

// ```cpp id="zrtmhy"
// #include <algorithm>
// ```

// ## Example

// ```cpp id="y15od9"
// string s = "abc";

// next_permutation(s.begin(), s.end());

// cout << s;
// ```

// Output:

// ```text id="8xjlwm"
// acb
// ```

// ---

// # 17. `__builtin_popcount()`

// Counts set bits in integer.

// GCC compiler builtin.

// ## Example

// ```cpp id="vk4eyt"
// int x = 7;

// cout << __builtin_popcount(x);
// ```

// Binary of 7:

// ```text id="xgq44m"
// 111
// ```

// Output:

// ```text id="2tb0lq"
// 3
// ```

// For long long:

// ```cpp id="c5m88n"
// __builtin_popcountll()
// ```

// ---

// # 18. `min_element()`

// Returns iterator to minimum element.

// Header:

// ```cpp id="vswz0d"
// #include <algorithm>
// ```

// ## Example

// ```cpp id="4du4mv"
// auto it = min_element(v.begin(), v.end());

// cout << *it;
// ```

// ---

// # 19. `max_element()`

// Returns iterator to maximum element.

// ## Example

// ```cpp id="pr1h1p"
// auto it = max_element(v.begin(), v.end());

// cout << *it;
// ```

// ---

// # Important Comparison Table

// | STL                | Internal DS    | Ordered               | Duplicate Allowed |
// | ------------------ | -------------- | --------------------- | ----------------- |
// | vector             | Dynamic array  | Yes (insertion order) | Yes               |
// | set                | Red-Black Tree | Yes                   | No                |
// | multiset           | Red-Black Tree | Yes                   | Yes               |
// | unordered_set      | Hash table     | No                    | No                |
// | unordered_multiset | Hash table     | No                    | Yes               |
// | map                | Red-Black Tree | Yes                   | Unique keys       |
// | multimap           | Red-Black Tree | Yes                   | Duplicate keys    |
// | unordered_map      | Hash table     | No                    | Unique keys       |
// | unordered_multimap | Hash table     | No                    | Duplicate keys    |

// ---

// # Which STL to Use?

// | Need                      | Use               |
// | ------------------------- | ----------------- |
// | Fast random access        | vector            |
// | Sorted unique data        | set               |
// | Fast searching            | unordered_set/map |
// | Key-value sorted storage  | map               |
// | FIFO                      | queue             |
// | LIFO                      | stack             |
// | Heap operations           | priority_queue    |
// | Frequent middle insertion | list              |

// ---

// # Most Important for Competitive Programming

// Learn deeply:

// 1. vector
// 2. pair
// 3. map
// 4. unordered_map
// 5. set
// 6. priority_queue
// 7. sort()
// 8. next_permutation()
// 9. binary_search()
// 10. lower_bound()/upper_bound()
