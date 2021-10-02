# Segment Tree Implementaion
# Time Complexities
# create = O(n)
# query = O(log(n))
# update = O(log(n))
# update_range = O(n)

def create_seg_tree(seg_arr, normy_arr, index, i, j):
    if i == j:
        seg_arr[index] = normy_arr[i]
        return
    else:
        mid = (i + j) // 2
        create_seg_tree(seg_arr, normy_arr, 2 * index, i, mid)
        create_seg_tree(seg_arr, normy_arr, 2 * index + 1, mid + 1, j)
        left = seg_arr[2 * index]
        right = seg_arr[2 * index + 1]
        seg_arr[index] = min(left, right)
    return seg_arr


def query(seg_arr, index, i, j, qi, qj):
    if qj < i or qi > j:
        return float("inf")
    if qi <= i and qj >= j:
        return seg_arr[index]
    mid = (i + j) // 2
    left = query(seg_arr, 2 * index, i, mid, qi, qj)
    right = query(seg_arr, (2 * index) + 1, mid + 1, j, qi, qj)
    return min(left, right)


def update(seg_arr, index, i, j, value_index, value):
    if value_index < i or value_index > j:
        return
    if i == j:
        seg_arr[index] = value
        return
    mid = (i + j) // 2
    update(seg_arr, 2 * index, i, mid, value_index, value)
    update(seg_arr, (2 * index) + 1, mid + 1, j, value_index, value)
    seg_arr[index] = min(seg_arr[2 * index], seg_arr[(2 * index) + 1])
    return seg_arr


def range_update(seg_arr, index, i, j, ri, rj, value):
    if rj < i or ri > j:
        return float("inf")
    if i == j:
        seg_arr[index] = value
        return
    mid = (i + j) // 2
    range_update(seg_arr, 2 * index, i, mid, ri, rj, value)
    range_update(seg_arr, (2 * index) + 1, mid + 1, j, ri, rj, value)
    seg_arr[index] = min(seg_arr[2 * index], seg_arr[(2 * index) + 1])
    return seg_arr


if __name__ == '__main__':
    arr = [1, -2, 0, 3]
    infinity = float("inf")
    segment = list(infinity for item in range(4 * len(arr) + 1))
    create_seg_tree(segment, arr, 1, 0, len(arr) - 1)
    print(segment)
    print(query(segment, 1, 0, len(arr) - 1, 1, 2))
    print(update(segment, 1, 0, len(arr) - 1, 1, 39))
    print(range_update(segment, 1, 0, len(arr) - 1, 0, 2, 87))