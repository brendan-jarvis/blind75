import { sayHello } from '../src/index'

describe('sayHello', () => {
  it('should return a welcome message', () => {
    expect(sayHello()).toBe('Welcome to the Blind 75 on TypeScript')
  })
})
