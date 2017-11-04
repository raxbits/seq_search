# seq_search
Sequencial Search Implementation for the heck of it


# Big "O" Analysis

Although there are many cases for this type of analysis, we pick the worst case scenario here.

At it's worst case, the code goes through an array of N elements where N is the size of the array, the elements at every location in the array is arbitrary. 

As N increases lets say from 10 element to 100 element, we have to search all 100 elements. This has O(N) complexity. 

We can cut the time for the average case scenario (it still stays O(N) however!) , where the number is somewhere in the middle of the list. But the worst case scenario , where the element stays at the end of the array (i.e at the last index) stays intact.

To cut the time for average scenario, we can have the search function return the location once it sees the element we were looking for.
