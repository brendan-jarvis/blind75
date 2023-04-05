// import all functions from the index file
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
