# Green Efficiency Analysis

## 1. Measurement Methodology

In this project, I used C programs to measure execution time and compare different ways of writing algorithms. I used the `clock()` function from the C time library to measure how long each program or function took to execute.

For the baseline experiment, I ran a loop with 100 million iterations three times. The execution times were 0.199983, 0.200553, and 0.198906 seconds. The average execution time was approximately 0.199814 seconds.

I also ran the algorithm comparison program three times. It compared a naive algorithm using nested loops with a single-pass algorithm. Finally, I added timing measurements to the instrumentation lab to measure different stages of the program.

## 2. Observed Performance Differences

The results showed a large difference between the two algorithms.

The naive algorithm took an average of 2.354333 seconds, while the single-pass algorithm took an average of approximately 0.000091667 seconds. This means the naive algorithm was about 25,684 times slower than the single-pass algorithm.

The main reason is the number of operations. The naive algorithm uses nested loops, which require many more operations. The single-pass algorithm processes the data in one loop, so it finishes much faster.

The baseline loop results were also consistent across the three runs, with only small differences in execution time.

## 3. Relation Between Runtime and Energy Consumption

Runtime can affect energy consumption because a program that uses the CPU for a longer time may consume more energy. In general, reducing unnecessary operations can help reduce CPU work and energy use.

The algorithm comparison showed that the single-pass approach completed much faster than the naive approach. This suggests that choosing a more efficient algorithm can help reduce the time the processor spends working.

However, I did not measure actual power or energy consumption in this project. Therefore, I cannot calculate the exact energy savings.

## 4. Limitations of the Experiment

There are some limitations in these experiments. First, I used only three runs for each measurement. More runs could provide more reliable averages.

Second, execution time can change because of other processes running on the computer, CPU activity, and system conditions.

Also, the `clock()` function measures processor time, not actual electrical energy. I did not use special tools to measure power consumption or CPU energy usage.

For these reasons, the results show performance differences, but they do not prove the exact amount of energy saved.

## 5. Practical Engineering Takeaway

This project helped me understand that algorithm choice has a major effect on program performance. A program can produce the correct result but still be inefficient if it performs unnecessary operations.

The single-pass algorithm was much faster because it processed the data only once instead of using nested loops.

As a developer, I should think about both correctness and efficiency when writing code. Measuring performance and comparing different solutions can help me make better engineering decisions. Efficient code can save execution time and may also help reduce resource usage.
