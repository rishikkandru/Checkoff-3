# Checkoff-3 Performance Benchmarking: C vs. Python
In this project, I'll be comparing C and Python's performance in finding prime numbers up to a limit. For some background, C is a low-level compiled language that goes from source code to machine code and then to program execution. Python is another language, but it's an interpreted language instead of a compiled language, and Python goes from source code to being interpreted and executed on the fly. Python is actually built on top of C and has multiple layers of abstraction to serve as a simple, readable programming language. The Python interpreter is written in C, various Python libraries are written in C, and you can even call C functions in Python. 

My approach to this project was to first learn the tool I needed, which was simply the terminal keyword "time" before I ran the programs. This allowed me to see the number of seconds it took to finish running a program, and this was specifically helpful in gathering data. I then programmed find_primes in both Python and C, using the same exact logic for both for a fair comparison. Afterward, I collected the data over three trials for each language at different upper bounds (10,000; 50,000; 100,000), and I was able to plot a graph of these bounds versus the average runtime over three trials for each language. 

Some of my most interesting discoveries were that, for 100,000, as an upper bound, C was almost 51x faster, and I was able to analyze from this graph that C had a closely linear time complexity growth as the upper bound increased, while Python had a polynomial time complexity growth as the upper bound increased. Overall, it was a really interesting project that showed me just how different two programming languages can be even with the same logic.

Instructions to run each program:
  
  find_primes.c:
      To run find_primes.c, first cd into the directory where it is located. You can use "cd /the absolute path to the directory containing the file" to do this. Then, run "gcc find_primes.c -o find_primes". After this, you can run the program with "./find_primes 100" (you can replace 100 with any number). If you want the time, run "time ./find_primes (chosen number)".
  
  find_primes.py:
      To run find_primes.py, first cd into the directory where it is located. You can use "cd /the absolute path to the directory containing the file" to do this. Then, run the program with "python3 find_primes.py 100" (you can replace 100 with any number). If you want the time, run "time python3 find_primes.py (chosen number)".
