# CMPSC 200: Cache Conundrum

| Date              |          |
|:------------------|:---------|
| 9 November 2023 | Assigned  |
| 17 November 2023| Due, end of lab       |
| Status           | [![GatorGrader](../../actions/workflows/main.yml/badge.svg)](../../actions/workflows/main.yml) |


## Learning objectives

* describe the purpose and effects of using an on-board two-way associative system cache memory
* implement program timing to draw conclusions about program performance
* analyze programmatic use or purposeful disuse of a cache
* summarize benefits and/or drawbacks using a cache
* suggest situations in which cache use _is not_ preferable

## Introduction

### `hello_cache`

This program is located in [hello_cache/main.c](hello_cache/main.c).

We've looked at this program...how many times?! The best part: it keeps getting more interesting. In this case, we're going to learn a few things
about where programs are actually stored and how we can begin to understand program performance more intuitively.

### `space_is_the_place`

This program is located in [space_is_the_place/main.c](space_is_the_place/main.c).

Our programs benefit from access to some shared system resources that make fast execution possible. We'll learn more about how one shared resource
(the `cache`) works, and look at a brief example why it's important and how concepts like `temporality` and `locality` work.

### Labs: `matrix_mania` and the `bad_blink`

Complete the programs in:

* [matrix_mania/main.c](matrix_mania/main.c)
* [bad_blink/main.c](bad_blink/main.c)

and use them to answer the questions in [docs/report.md](docs/report.md). Steps for each are included below.

#### `bad_blink`

As the saying goes, there's something wrong in the state of moonrock. One of our devices appears a little broken. Can you tell us what's wrong?

* Run the program contained in the `bad_blink` folder; it seems that something is a little slow -- what is it?
* Review the code and respond to the relevant questions in [docs/report.md](docs/report.md)
* After reviewing the code and writing a bit, how would you fix it?

> Hint: here, we're thinking largely about _temporality_; if we're not caching the entire sequence of instructions/data in the `for` loop, how
> might that affect a program's ability to function efficiently?

#### `matrix_mania`

A step-up from traditional arrays, `matrix_mania` engages in _two-dimensional array_s. We're escaping our one-dimensional world and stepping into `row-major` and `column-major` territory. There are two functions that average a randomly-generated matrix. They do the same thing, essentially, but in very slightly different -- but consequential -- ways. Your goal(s):

* time each function
* determine the basic cache hit and miss rates for these functions, and
* add them to the table in [docs/report.md](docs/report.md)

From this example, you should be able to draw some conclusions about why one function is much more efficient and _faster_ than the other.

> Hint: this has to do with data _locality_; is it possible that some of the data is harder to group due to proximity from each other?

### Assignment "Hacks"

See the `Suggestions` below to challenge yourself to implement a Hack. As always, you are allowed to develop
your own Hack to satisfy this stretch goal. Place the code for the Hack inline with the code in the corresponding
file.

In order to recieve credit for the Hack, you must fill out the [hack.md](docs/hack.md) file located in the
`docs` folder.

#### Space might be the place, but could it be better?

Our `space_is_the_place` `sum_array` function is pretty standard. But what do we notice about the `numbers` array? Could we possibly rewrite some portion of to make it perform _just a little better_?

> Hint: Here, we might think about _data types_; is there a better or worse data type for our `numbers` array?

#### `matrix_mania`

* Use `averageMat_v1` for this hack.

First, let's figure out the maximum amount of elements we think we can fit in our matrix. Calculate this for the `heap` size that's free at the beginning 
of program execution. `getTotalHeap` and `getFreeHeap` are both available to you.

There _is_ a benefit to _not_ caching our information -- we gain _space_. For example, you might figure out how many more rows and columns we can add to our
matrix. Write a `func_ptr_t` for `averageMat_v1` to place it _out of cacheable range_. Do we _gain_ space? If so, how much? Recall that our cache is `16K`.

### Changes to files in `.vscode`

Based on your system setup (refer to your `hello-blinky` assignment), you will need switch out the `.vscode` folder in each exercise with the _last working copy_.

See our [wiki's entry  on "Configuring Assignments"](https://github.com/allegheny-college-cmpsc-200-fall-2023/course-materials/wiki/03-Configuring-Assignments)
for more information.
