class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        if "0" in [num1, num2]:
            return "0"
        res =0
        p2=1
        for i in reversed(num2):
            digit2 = int(i)
            cur = 0  # Resets for each digit of num2 to store the current product
            p1 = 1   # Keeps track of the power of 10 for num1 (1, 10, 100...)
            
            # Multiply the single digit 'i' by the whole of num1 digit-by-digit
            for j in reversed(num1):
                digit1 = int(j)
                cur += (digit1 * digit2) * p1
                p1 *= 10  # Move to the next place value in num1
            
            # Multiply by 10 based on num2's position, then add to previous answer
            res += cur * p2
            p2 *= 10      # Shift into 10 for the next digit in num2
            
        return str(res)

