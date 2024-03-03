## Summary

It is a method of dividing one list into two unequal sizes based on a pivot, arranging the divided partial lists, and then summing the two aligned partial lists to make the whole sorted list.

Quick alignment consists of the following steps. <br/>
Divide: Divide the input array into two sub-arrangements (left: elements smaller than the pivot, right: elements larger than the pivot) unevenly based on the pivot. <br/>
Conquer: Sort the partial arrangement. If the size of the partial arrangement is not small enough, use cyclic calls to apply the split-conquer method again. <br/>
Combine: Merge aligned partial arrays into one array. <br/>

At least one element (pivot) is finally positioned for each cyclic call, so this algorithm can be guaranteed to end.
<br/>
<br/>

![quick-sort2](https://github.com/Seol-hub/Struct-QuickSort/assets/141290630/b962bd5d-7419-4d92-a777-cfbad0b1d4d7)
