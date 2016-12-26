/*
** File Name: MergeSort.H
** Author: Ovidio de Jesus Henriquez
** 
** This file contains my implementation of the merge sort algorithm to use for
** future projects.
*/

/** INCLUDES **/
#include <vector>
#include <math.h>

/** MergeSort Functions **/
template <class T>
std::vector<T> merge_sort(std::vector<T> unsorted)
{
  // Check if the vector only contains one element
  if (unsorted.size() != 1)
  {
    // Divide the vector into subvectors
    int lower_half = ceil(unsorted.size() / 2.0);
    std::vector<T> first(unsorted.begin(), unsorted.begin() + lower_half);
    std::vector<T> last(unsorted.begin() + lower_half, unsorted.end());

    // Recursively call the merge_sort function on the subvectors
    std::vector<T> sorted_first = merge_sort(first);
    std::vector<T> sorted_last = merge_sort(last);

    // Combine and sort the two subarrays
    std::vector<T> sorted;
    int i = 0;
    int j = 0;

    while (i < sorted_first.size() && j < sorted_last.size())
    {
      // Compare the ith and jth elements of sorted_first and sorted_last
      // Add the lower value to the sorted vector
      if (sorted_first[i] <= sorted_last[j])
      {
        sorted.push_back(sorted_first[i]);
        ++i;
      }
      else
      {
        sorted.push_back(sorted_last[j]);
        ++j;
      }
    }

    // Add the remaining elements of the vector that still contains elements
    while(i < sorted_first.size())
    {
      sorted.push_back(sorted_first[i]);
      ++i;
    }
    while(j < sorted_last.size())
    {
      sorted.push_back(sorted_last[j]);
      ++j;
    }

    // Return the sorted vector
    return sorted;
  }
  // Return the unsorted vector because it only contains one element
  return unsorted;
}
