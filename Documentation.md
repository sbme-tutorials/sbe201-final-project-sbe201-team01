# **Final Project Documentation**
## DNA mutations
The main target of our projec is to detect teh abnormal DNA mismataches in patterns which ay be a mutation in the DNA, 
### Used Algorithm
We found that the simplest way to construct our code to perfectly do the function we need which is finding the mismatch in the patterns of the genome, is to use data structure and algorithms that were already built specially for searching patterns and construction of the data in a certain way, so we used *suffix arrays* and *Burrows Wheeler Algorithm*.
#### What is suffix array?
A suffix array is a sorted array of all suffixes of a given string.
- first, we divide the word (string ) into parts, each part is smaller that the previous one with one letter.
- then we give each of these parts an index in the array.
- then we sort these parts alphabetically to have our suffix. The next example will clear how it can be constructed for an array of strings.
##### **EXAMPLE**
```c++
Let the given string be "mutation".

0 mutation                         3 ation
1 utation    Sort the Suffixes     5 ion
2 tation      ---------------->    0 mutation 
3 ation      alphabetically        7 n
4 tion                             6 on
5 ion                              2 tation
6 on                               4 tion
7 n                                1 utation

So the suffix array for "mutataion" is {3, 5, 0, 7, 6, 2, 4, 1}
```
#### What is Burrow Wheeler Algorithm?

### Applications of our algorithm
()
## Instruction to compile and run the source code

## References:
1. [Genome variations](http://www.genomenewsnetwork.org/resources/whats_a_genome/Chp4_1.shtml)
2. [Suffix array](https://www.geeksforgeeks.org/suffix-array-set-1-introduction/)
