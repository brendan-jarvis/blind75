import * as leetcode from '../src/TypeScript/blind75'

describe('Contains Duplicate #217', () => {
  it('should return true if the array contains duplicates', () => {
    expect(leetcode.containsDuplicate([1, 2, 3, 1])).toBe(true)
  })

  it('should return false if the array does not contain duplicates', () => {
    expect(leetcode.containsDuplicate([1, 2, 3, 4])).toBe(false)
  })

  it('should return true on longer arrays', () => {
    expect(leetcode.containsDuplicate([1, 1, 1, 3, 3, 4, 3, 2, 4, 2])).toBe(
      true
    )
  })
})

describe('Valid Anagram #242', () => {
  it('should return true if the strings are anagrams', () => {
    expect(leetcode.isAnagram('anagram', 'nagaram')).toBe(true)
  })

  it('should return false if the strings are not anagrams', () => {
    expect(leetcode.isAnagram('rat', 'car')).toBe(false)
  })

  it('should not be case sensitive', () => {
    expect(leetcode.isAnagram('Nadnerb Sivraj', 'Brendan Jarvis')).toBe(true)
  })

  it('should return false on strings of different lengths', () => {
    expect(leetcode.isAnagram('a', 'ab')).toBe(false)
  })
})

describe('Two Sum #1', () => {
  it('should return the indices of the two numbers that add up to the target', () => {
    expect(leetcode.twoSum([2, 7, 11, 15], 9)).toEqual([0, 1])
  })

  it('should return the indices of the two numbers that add up to the target', () => {
    expect(leetcode.twoSum([3, 2, 4], 6)).toEqual([1, 2])
  })

  it('should return the indices of the two numbers that add up to the target', () => {
    expect(leetcode.twoSum([3, 3], 6)).toEqual([0, 1])
  })

  it('should return an empty array if there are no two numbers that add up to the target', () => {
    expect(leetcode.twoSum([2, 7, 11, 15], 10)).toEqual([])
  })
})

describe('Valid Palindrome #125', () => {
  it('should return true if the string is a palindrome', () => {
    expect(leetcode.isPalindrome('A man, a plan, a canal: Panama')).toBe(true)
  })

  it('should return false if the string is not a palindrome', () => {
    expect(leetcode.isPalindrome('race a car')).toBe(false)
  })

  it('should return true if the string is a palindrome as it has no alphanumeric characters', () => {
    expect(leetcode.isPalindrome(' ')).toBe(true)
  })

  it('should return true if the string is a palindrome with an underscore in it', () => {
    expect(leetcode.isPalindrome('ab_a')).toBe(true)
  })
})

describe('Best Time to Buy and Sell Stock #121', () => {
  it('should return the max profit', () => {
    expect(leetcode.maxProfit([7, 1, 5, 3, 6, 4])).toEqual(5)
  })

  it('should not make a transaction if no profit to be made', () => {
    expect(leetcode.maxProfit([7, 6, 4, 3, 1])).toEqual(0)
  })

  it('should return the max profit', () => {
    expect(leetcode.maxProfit([1, 2, 4, 7, 11])).toEqual(10)
  })
})

describe('Valid Parentheses #20', () => {
  it('should detect rounded brackets', () => {
    expect(leetcode.validParentheses('()')).toEqual(true)
  })

  it('should detect square brackets', () => {
    expect(leetcode.validParentheses('[]')).toEqual(true)
  })

  it('should detect curly brackets', () => {
    expect(leetcode.validParentheses('{}')).toEqual(true)
  })

  it('should detect unmatched brackets', () => {
    expect(leetcode.validParentheses('(}')).toEqual(false)
  })

  it('should detect missing brackets', () => {
    expect(leetcode.validParentheses('(;')).toEqual(false)
  })

  it('should detect incorrectly nested brackets', () => {
    expect(leetcode.validParentheses('([)]')).toEqual(false)
  })

  it('should allow correctly nested brackets', () => {
    expect(leetcode.validParentheses('([])')).toEqual(true)
  })

  it('should allow longer correctly nested brackets', () => {
    expect(leetcode.validParentheses('([{[([{[]}])]}])')).toEqual(true)
  })
})

describe('Reverse Linked List #206', () => {
  it('should reverse a linked list', () => {
    const list = new leetcode.ListNode(1)
    list.next = new leetcode.ListNode(2)
    list.next.next = new leetcode.ListNode(3)
    list.next.next.next = new leetcode.ListNode(4)
    list.next.next.next.next = new leetcode.ListNode(5)

    const reversed = leetcode.reverseList(list)
    // Flatten the linked list into an array
    const reversedArray: number[] = []
    let node = reversed
    while (node) {
      reversedArray.push(node.val)
      node = node.next
    }

    expect(reversedArray).toEqual([5, 4, 3, 2, 1])
  })

  it('should handle an empty linked list', () => {
    expect(leetcode.reverseList(null)).toEqual(null)
  })

  it('should handle a linked list with one node', () => {
    const list = new leetcode.ListNode(1)
    expect(leetcode.reverseList(list)).toEqual(list)
  })

  it('should handle a linked list with two nodes', () => {
    const list = new leetcode.ListNode(1)
    list.next = new leetcode.ListNode(2)

    const reversed = leetcode.reverseList(list)

    const reversedArray: number[] = []
    let node = reversed
    while (node) {
      reversedArray.push(node.val)
      node = node.next
    }

    expect(reversedArray).toEqual([2, 1])
  })
})

describe('Merge Two Sorted Lists #21', () => {
  it('should merge two sorted lists', () => {
    const list1 = new leetcode.ListNode(1)
    list1.next = new leetcode.ListNode(2)
    list1.next.next = new leetcode.ListNode(4)

    const list2 = new leetcode.ListNode(1)
    list2.next = new leetcode.ListNode(3)
    list2.next.next = new leetcode.ListNode(4)

    const merged = leetcode.mergeTwoLists(list1, list2)

    const mergedArray: number[] = []
    let node = merged
    while (node) {
      mergedArray.push(node.val)
      node = node.next
    }

    expect(mergedArray).toEqual([1, 1, 2, 3, 4, 4])
  })

  it('should handle an empty list', () => {
    const list1 = new leetcode.ListNode(1)
    list1.next = new leetcode.ListNode(2)
    list1.next.next = new leetcode.ListNode(4)

    expect(leetcode.mergeTwoLists(list1, null)).toEqual(list1)
  })

  it('should handle an empty list', () => {
    const list2 = new leetcode.ListNode(1)
    list2.next = new leetcode.ListNode(3)
    list2.next.next = new leetcode.ListNode(4)

    expect(leetcode.mergeTwoLists(null, list2)).toEqual(list2)
  })

  it('should handle two empty lists', () => {
    expect(leetcode.mergeTwoLists(null, null)).toEqual(null)
  })
})

describe('Linked List Cycle #141', () => {
  it('should detect a cycle', () => {
    const list = new leetcode.ListNode(3)
    list.next = new leetcode.ListNode(2)
    list.next.next = new leetcode.ListNode(0)
    list.next.next.next = new leetcode.ListNode(-4)
    list.next.next.next.next = list.next

    expect(leetcode.hasCycle(list)).toEqual(true)
  })

  it('should detect a cycle', () => {
    const list = new leetcode.ListNode(1)
    list.next = new leetcode.ListNode(2)
    list.next.next = list

    expect(leetcode.hasCycle(list)).toEqual(true)
  })

  it('should not detect a cycle', () => {
    const list = new leetcode.ListNode(1)

    expect(leetcode.hasCycle(list)).toEqual(false)
  })

  it('should not detect a cycle', () => {
    const list = new leetcode.ListNode(1)
    list.next = new leetcode.ListNode(2)

    expect(leetcode.hasCycle(list)).toEqual(false)
  })
})

describe('Climbing Stairs #70', () => {
  it('should return the number of ways to climb 2 stairs', () => {
    expect(leetcode.climbStairs(2)).toEqual(2)
  })

  it('should return the number of ways to climb 3 stairs', () => {
    expect(leetcode.climbStairs(3)).toEqual(3)
  })

  it('should return the number of ways to climb 4 stairs', () => {
    expect(leetcode.climbStairs(4)).toEqual(5)
  })

  it('should return the number of ways to climb 5 stairs', () => {
    expect(leetcode.climbStairs(5)).toEqual(8)
  })

  it('should return the number of ways to climb 6 stairs', () => {
    expect(leetcode.climbStairs(6)).toEqual(13)
  })
})
