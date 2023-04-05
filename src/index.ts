export const containsDuplicate = (nums: number[]): boolean => {
  // Set only allows unique values
  // If this set has the same size as the original array, there are no duplicates
  const set = new Set(nums)
  return set.size !== nums.length
}
