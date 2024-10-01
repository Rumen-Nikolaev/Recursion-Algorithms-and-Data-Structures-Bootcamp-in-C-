#include <iostream>
using namespace std;

// Function to solve the Tower of Hanoi problem
// disk: the current disk to be moved
// source: the rod from which the disk will be moved
// middle: the auxiliary rod used for temporary storage
// destination: the rod to which the disk will be moved
void solve(int disk, char source, char middle, char destination) {
    
    // Base case: if there is only one disk (disk 0), move it directly
    if(disk == 0) {
        cout << "Plate " << disk << " from " << source << " to " << destination << endl;
        return;
    }
    
    // Step 1: Move n-1 plates from the source rod to the middle rod
    // using the destination rod as auxiliary storage.
    solve(disk-1, source, destination, middle);
    
    // Step 2: Move the nth plate (the largest one) directly from the source rod to the destination rod.
    cout << "Plate " << disk << " from " << source << " to " << destination << endl;
    
    // Step 3: Move the n-1 plates from the middle rod to the destination rod
    // using the source rod as auxiliary storage.
    solve(disk-1, middle, source, destination);
}

int main() {
    // Solving the Tower of Hanoi problem for 2 disks
    solve(2, 'A', 'B', 'C');

    return 0;
}
