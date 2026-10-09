
class Solution:
    def mergeTriplets(self, triplets: List[List[int]], target: List[int]) -> bool:
        x, y, z = False, False, False

        for a, b, c in triplets:
            if a <= target[0] and b <= target[1] and c <= target[2]:
                if a == target[0]:
                    x = True
                if b == target[1]:
                    y = True
                if c == target[2]:
                    z = True

        return x and y and z
