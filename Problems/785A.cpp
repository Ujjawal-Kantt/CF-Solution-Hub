#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<string, int> polyhedrons = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}};

    int total_faces = 0;
    for (int i = 0; i < n; ++i)
    {
        string polyhedron;
        cin >> polyhedron;
        total_faces += polyhedrons[polyhedron];
    }

    cout << total_faces << endl;
    return 0;
}