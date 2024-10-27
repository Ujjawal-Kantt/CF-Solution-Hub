def fibonacci_mod(k):
    """ Computes the Fibonacci sequence modulo k and returns the Pisano period and indices of Fibonacci numbers divisible by k. """
    previous, current = 0, 1
    pisano_period = []
    indices = []
    
    for i in range(k * k):  # Pisano period length is at most k * k
        previous, current = current, (previous + current) % k
        pisano_period.append(current)
        if current == 0:
            indices.append(i + 1)  # +1 because we want 1-based index

        # The period starts again when we see 0, 1 again
        if previous == 0 and current == 1:
            break
            
    return pisano_period, indices

def G(n, k):
    """ Computes G(n, k). """
    # Get the Pisano period and the indices of Fibonacci numbers divisible by k
    pisano_period, indices = fibonacci_mod(k)
    
    # The length of the Pisano period
    period_length = len(indices)

    # We need to find the (n % period_length)th index of indices
    n_mod = (n - 1) % period_length  # Adjust for 0-based indexing

    if period_length == 0 or n_mod >= len(indices):
        return 0

    result_index = indices[n_mod]
    return result_index % (10**9 + 7)

# Reading input
import sys
input = sys.stdin.read
data = input().splitlines()

t = int(data[0])
results = []
for i in range(1, t + 1):
    n, k = map(int, data[i].split())
    results.append(G(n, k))

# Output results
sys.stdout.write('\n'.join(map(str, results)) + '\n')
