// Type Challenges

// 13. Warmup - Hello World
type HelloWorld = string // expected to be a string

/* _____________ Test Cases _____________ */
import type { Equal, Expect, NotAny } from '@type-challenges/utils'

type cases = [Expect<NotAny<HelloWorld>>, Expect<Equal<HelloWorld, string>>]

// 4. Easy - Pick
type MyPick<T, K> = any

/* _____________ Test Cases _____________ */
import type { Equal, Expect } from '@type-challenges/utils'

type cases = [
  Expect<Equal<Expected1, MyPick<Todo, 'title'>>>,
  Expect<Equal<Expected2, MyPick<Todo, 'title' | 'completed'>>>,
  // @ts-expect-error
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
