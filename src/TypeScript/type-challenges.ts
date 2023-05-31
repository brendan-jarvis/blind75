// Type Challenges

// 13. Warmup - Hello World
type HelloWorld = string // expected to be a string

/* _____________ Test Cases _____________ */
import type { Equal, Expect, NotAny } from '@type-challenges/utils'

type cases = [Expect<NotAny<HelloWorld>>, Expect<Equal<HelloWorld, string>>]

// 4. Easy - Pick
// Implement Pick, which takes an object type and a set of string literal types and returns a type which just has the provided fields.
type MyPick<T, K> = {
  [P in keyof T as P extends K ? P : never]: T[P]
}

/* _____________ Test Cases _____________ */

type pickCases = [
  Expect<Equal<Expected1, MyPick<Todo, 'title'>>>,
  Expect<Equal<Expected2, MyPick<Todo, 'title' | 'completed'>>>,
  MyPick<Todo, 'title' | 'completed' | 'invalid'>
]

interface Todo {
  title: string
  description: string
  completed: boolean
}

interface Expected1 {
  title: string
}

interface Expected2 {
  title: string
  completed: boolean
}
