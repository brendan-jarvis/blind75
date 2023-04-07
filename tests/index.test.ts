import * as leetcode from '../src/index'

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
