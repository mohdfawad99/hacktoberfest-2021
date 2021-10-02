# Binary indexed tree (fenwick tree) (easier implemenation than segment trees for sum queries){also for inversion count}

def get_sum(array, r):
    answer = 0
    while r > 0:
        answer += array[r]
        r -= r & (-r)      # subtracting right-most set bit 
    return answer


def update_BIT(a, b, i):
    add = b[i-1]
    while i < len(a):
        a[i] += add
        i += i & (-i)     # adding right most set bit


def create_BIT(BIT):
    BIT_arr = [0 for item in range(len(BIT) + 1)]
    for j in range(1, len(BIT_arr)):
        update_BIT(BIT_arr, BIT, j)
    return BIT_arr


arr = [2, 1, 1, 3, 2, 3, 4, 5, 6, 7, 8, 9]

BI_tree = create_BIT(arr)
print(BI_tree)
print(get_sum(BI_tree, 6))
