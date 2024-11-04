#include <stdio.h>

// Function to check if an element is already present in the array
// This function iterates through the 'collection' array and checks if the 'element' already exists.
int exists_in_collection(int *collection, int size, int element) {
    for (int i = 0; i < size; i++) {
        // If the element is found in the collection, return 1 (true)
        if (collection[i] == element) {
            return 1; // Element already exists
        }
    }
    // If the element is not found, return 0 (false)
    return 0; // Element does not exist
}

// Function that merges the collections from Heroes HQ and Action Comics without repeating editions
void merge_collections(int *heroes_hq_collection, int *action_comics_collection, int heroes_hq_size, int action_comics_size, int *unified_collection, int *final_size) {
    int index = 0;  // Index to track the position in the 'unified_collection' array

    // Add the editions from the Heroes HQ collection directly to the unified collection
    for (int i = 0; i < heroes_hq_size; i++) {
        unified_collection[index++] = heroes_hq_collection[i];
        // Each edition from 'heroes_hq_collection' is copied to 'unified_collection'
    }

    // Add the editions from the Action Comics collection, but without repeating already inserted editions
    for (int i = 0; i < action_comics_size; i++) {
        // Check if the Action Comics edition is already present in the unified collection
        if (!exists_in_collection(unified_collection, index, action_comics_collection[i])) {
            // If not present, add this edition to the unified collection
            unified_collection[index++] = action_comics_collection[i];
        }
    }

    // Update the value pointed by 'final_size' with the size of the unified collection
    *final_size = index;  // 'index' holds the total number of unified editions
}

int main() {
    // Define the Heroes HQ collection with 4 editions
    int heroes_hq_collection[] = {101, 102, 103, 104};  // IDs of the editions from Heroes HQ

    // Define the Action Comics collection with 3 editions
    int action_comics_collection[] = {201, 202, 203};   // IDs of the editions from Action Comics

    // Size of the Heroes HQ and Action Comics collections
    int heroes_hq_size = 4;   // Size of the Heroes HQ collection
    int action_comics_size = 3; // Size of the Action Comics collection

    // Array where the unified collection will be stored; maximum size is 7 (4 + 3)
    int unified_collection[7];  

    // Variable to store the final size of the unified collection
    int final_size;

    // Call the 'merge_collections' function to combine both collections
    merge_collections(heroes_hq_collection, action_comics_collection, heroes_hq_size, action_comics_size, unified_collection, &final_size);

    // Display the unified collection
    printf("Unified collection: ");
    for (int i = 0; i < final_size; i++) {
        printf("%d ", unified_collection[i]);  // Print each edition in the unified collection
    }

    // Print the final size of the unified collection
    printf("\nSize of the unified collection: %d\n", final_size);

    return 0;  // End the program
}