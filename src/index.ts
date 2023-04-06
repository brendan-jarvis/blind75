export const containsDuplicate = (nums: number[]): boolean => {
  // Set only allows unique values
  // If this set has the same size as the original array, there are no duplicates
  const set = new Set(nums)
  return set.size !== nums.length
}

export const isAnagram = (s: string, t: string): boolean => {
  // Create an array each string characters in lowercase
  // Sort the arrays
  // Join the arrays back into strings
  // Compare the strings
  return (
    s.toLowerCase().split('').sort().join('') ===
    t.toLowerCase().split('').sort().join('')
  )
}

export const twoSum = (nums: number[], target: number): number[] => {
  // Create a map to store the numbers and their indices
  const map = new Map()

  // Loop through the array
  for (let i = 0; i < nums.length; i++) {
    // The current number
    const num = nums[i]
    // The number we need to add to the current number to get the target
    const complement = target - num

    // If the map has the complement, return the indices
    if (map.has(complement)) {
      return [map.get(complement), i]
    }

    // Otherwise, add the number and its index to the map
    map.set(num, i)
  }

  // If we get here, there are no two numbers that add up to the target
  return []
}
