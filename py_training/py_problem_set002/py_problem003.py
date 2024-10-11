nested_list = [[1, 2], [3, 4], [5, 6]]
flat_list = [item for sublist in nested_list for item in sublist]
print(flat_list)

"""
[1, 2, 3, 4, 5, 6]
import itertools
nested_list = [[1, 2], [3, 4], [5, 6]]
flat_list = list(itertools.chain.from_iterable(nested_list))
print(flat_list)



import numpy as np
flat_array = np.array(nested_list).flatten()
"""