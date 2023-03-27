#include <iostream>
#include <random>
#include <vector>
using namespace std;
vector<int> generate_random_num(int count) {
    vector<int> result;
    random_device rd;
    mt19937_64 engine(rd());
    uniform_int_distribution<int> dist(1, 100);
    for (int i = 0; i < count; i++) {
        result.push_back(dist(engine));
    }

    return result;
}

void missions() {
    vector<int> sequence = generate_random_num(10);

    for (int i = 0; i < sequence.size(); i++) {
        cout << sequence[i] << ", ";
    }
    cout << "\n\n\n";
}

int main() {
    int counter = 10;
    for (int i = 0; i < counter; i++) {
        missions();
    }

    return 0;
}
