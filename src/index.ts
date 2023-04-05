export const containsDuplicate = (nums: number[]): boolean => {
  // Set only allows unique values
  // If this set has the same size as the original array, there are no duplicates
  const set = new Set(nums)
  return set.size !== nums.length
}

export const isAnagram = (s: string, t: string): boolean => {
  // If the strings are not the same length, they cannot be anagrams
  if (s.length !== t.length) {
    return false
  }
  // Create an array each string characters in lowercase
  // Sort the arrays
  // Join the arrays back into strings
  // Compare the strings
  return (
    s.toLowerCase().split('').sort().join('') ===
    t.toLowerCase().split('').sort().join('')
  )
}
