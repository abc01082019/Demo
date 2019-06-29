def factorial(num):
    if (num < 1):
        return 0;
    if (num == 1):
        return 1;
    else:
        return num * factorial(num - 1);

for i in range(10):
    print factorial(i);
