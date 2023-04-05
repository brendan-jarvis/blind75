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
