#include <bits/stdc++.h>
using namespace std;

const int oo = INT_MAX;

template <typename T>
class Heap {

    private:
        vector<T> elements;
        size_t N;

        size_t dad(int i) const { return i >> 1; }
        size_t left_children(int i) const { return i << 1; }
        size_t right_children(int i) const { return (i << 1) + 1; }

    public:
        Heap() : elements(1), N(0) {}

        size_t size() const { return N; }
        
        void insert(int x) {
            if (N + 1 == (size_t)elements.size()) elements.push_back(x);
            else elements[N + 1] = x;

            int curr_node = N + 1;
            int parent = dad(curr_node);

            while (parent and elements[parent] > elements[curr_node]) {
                swap(elements[parent], elements[curr_node]);
                curr_node = parent;
                parent = dad(curr_node);
            }

            ++N;
        }

        bool empty() { return N == 0; }

        auto min() { return (not empty()) ? elements[1] : -oo; }

        T extract_min() {
            T x = min();
            swap(elements[1], elements[N]);
            --N;

            int root = 1;
            int l = left_children(root) <= N ? left_children(root) : 0;
            while (l) {
                int r = right_children(root) <= N ? right_children(root) : 0;
                if (r and elements[r] < elements[l]) l = r;

                if (elements[root] <= elements[l]) break;

                swap(elements[root], elements[l]);
                root = l;
                l = left_children(root) <= N ? left_children(root) : 0;
            }
            return x;
        }

        auto get_iterator() { return elements.begin() + 1; }

        auto get_elements() {
            auto jt = get_iterator();
            for (auto it = jt; it != jt + size(); ++it) cout << *it << ' ';
            cout << '\n';
        }

        auto get_elements_in_order() {
            while (size()) {
                cout << extract_min() << ' ';
                cout << '\n';
            }
        }
};

int main() {

    Heap<int> min_heap;

    min_heap.insert(77);
    min_heap.insert(10);
    min_heap.insert(1);
    min_heap.insert(33);
    min_heap.insert(10);
    min_heap.insert(1);
    min_heap.insert(10);
    min_heap.insert(1);

    min_heap.get_elements();
    min_heap.get_elements_in_order();

    return 0;
}
