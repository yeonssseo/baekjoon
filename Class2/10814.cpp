#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Person {
    int age;
    string name;
    int index;
};

bool compare(const Person& a, const Person& b) {
    if (a.age == b.age) {
        return a.index < b.index;
    }
    return a.age < b.age;
}

int main() {
    int n = 0;
    cin >> n;

    vector<Person> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].age >> v[i].name;
        v[i].index = i;
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++) {
        cout << v[i].age << " " << v[i].name << "\n";
    }
}