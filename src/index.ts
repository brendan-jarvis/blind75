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

export const validParentheses = (s: string): boolean => {
  const brackets = new Map([
    ['(', ')'],
    ['{', '}'],
    ['[', ']'],
  ])
  const stack = []

  for (const char of s) {
    // If the character is an opening bracket push the closing bracket to the stack
    if (brackets.has(char)) {
      stack.push(brackets.get(char))
    } else {
      // Assume the character is a closing bracket
      // If the stack is empty, or the closing bracket does not match the top of the stack
      // return false
      if (stack.pop() !== char) return false
    }
  }

  return stack.length === 0
}

// Definition for singly-linked list.
export class ListNode {
  val: number
  next: ListNode | null
  constructor(val?: number, next?: ListNode | null) {
    this.val = val === undefined ? 0 : val
    this.next = next === undefined ? null : next
  }
}

export const reverseList = (head: ListNode | null): ListNode | null => {
  let previous = null,
    current = head
  while (current !== null) {
    previous = new ListNode(current.val, previous)
    current = current.next
  }
  return previous
}

export const mergeTwoLists = (
  list1: ListNode | null,
  list2: ListNode | null
): ListNode | null => {
  if (!list1) return list2
  if (!list2) return list1

  if (list1.val < list2.val) {
    list1.next = mergeTwoLists(list1.next, list2)
    return list1
  } else {
    list2.next = mergeTwoLists(list1, list2.next)
    return list2
  }
}

export const hasCycle = (head: ListNode | null): boolean => {
  let slow = head,
    fast = head
  while (fast && fast.next) {
    slow = slow?.next ?? null
    fast = fast.next.next
    if (slow === fast) return true
  }
  return false
}

export const climbStairs = (n: number): number => {
  if (n === 0) return 0
  if (n === 1) return 1
  if (n === 2) return 2

  let first = 1,
    second = 2,
    third = 0

  for (let i = 3; i <= n; i++) {
    third = first + second
    first = second
    second = third
  }

  return third
}
