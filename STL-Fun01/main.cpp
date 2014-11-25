#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
std::vector<int> foo = {25,15,5,-5,-15};
std::vector<int> bar;

// copy only positive numbers:
    auto it = std::copy_if (foo.begin(), foo.end(), 
              std::back_inserter(bar), [](int i){return i>=0;} );
    
    
    ostream_iterator<int> outIter( cout, " " );
    copy( bar.begin(), bar.end(), outIter );
    cout << endl;
    return 0;
}

