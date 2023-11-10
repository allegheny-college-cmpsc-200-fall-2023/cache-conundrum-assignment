# Cache Conundrum: General report

This week we briefly learn about how programs execute at speed and efficiency, _and_ how they _don't_. Mainly:

* the existence of the cache and factors which affect it
* `spatial` and `temporal` locality, i.e.:
    * how _far_ data is apart and how that affects what is brought into the cache
    * how _often_ data is accessed and how that indicates what will be cached
* basic ways to evaluate the effectiveness of the _ways_ that functions are written and how construction impacts caching

## In `bad_blink` we made our program peformance _worse_. In your own words, why?

`TODO`

### The `blink()` function still operates at the speed we expect. How do you think the cache influence this? What do the hit and miss rates tell you?

`TODO`

## `matrix_mania` compares two functions: `averageMat_v1` and `averageMat_v2`. Which is constructed in a way that leverages the cache? Why?

> Use the outcomes of your timing and cache analysis to guide your answer; include specific numbers that influence your thinking.

`TODO`

## In your own words, how does caching (on, at least, the `RP2040`, our processor) work?

`TODO`
