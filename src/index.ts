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

export const isPalindrome = (s: string): boolean => {
  // Remove all non-alphanumeric characters using regex - can find this with Google
  // Use built-in string methods to convert to lowercase
  // No built-in reverse method for strings, so split into an array, reverse, and join back into a string
  return (
    s
      .replace(/[^a-zA-Z0-9]/g, '')
      .toLowerCase()
      .split('')
      .reverse()
      .join('') === s.replace(/[^a-zA-Z0-9]/g, '').toLowerCase()
  )
}

export const maxProfit = (prices: number[]): number => {
  let min = prices[0]
  let maxProfit = 0

  for (let i = 1; i < prices.length; i++) {
    if (prices[i] < min) {
      min = prices[i]
    } else if (prices[i] - min > maxProfit) {
      maxProfit = prices[i] - min
    }
  }

  return maxProfit
}
