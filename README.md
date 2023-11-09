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

### `matrix_mania`

This program is located in [matrix_mania/main.c](matrix_mania/main.c).

Taking our previous examples further, we look at `2D` arrays in `C` (a `matrix`) to learn more about ideas of `temporality` and `locality` and draw
conclusions from what we've learned about memory access.

### Changes to files in `.vscode`

Based on your system setup (refer to your `hello-blinky` assignment), you will need switch out the `.vscode` folder in each exercise with the _last working copy_.

See our [wiki's entry  on "Configuring Assignments"](https://github.com/allegheny-college-cmpsc-200-fall-2023/course-materials/wiki/03-Configuring-Assignments)
for more information.
