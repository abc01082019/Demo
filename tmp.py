i = 1;
j = 2;
k = 3;

def fib(num):
    if (num <= 0):
        return 0;
    if (num == 1):
        return 1;
    else:
        return fib(num - 2) + fib(num -1);


for i in range(1, 11):
    print "the " + str(i) + ". fibonacci number is " + str(fib(i));
