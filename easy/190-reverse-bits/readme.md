# 190. Reverse Bits

```
Reverse bits of a given 32 bits unsigned integer.
Note:
	- Note that in some languages, such as Java, there is no unsigned integer type. In this case, both input and output will be given as a signed integer type. They should not affect your implementation, as the integer's internal binary representation is the same, whether it is signed or unsigned.
	- In Java, the compiler represents the signed integers using 2's complement notation. Therefore, in Example 2 below, the input represents the signed integer -3 and the output represents the signed integer -1073741825.
 
Example 1:
Input: n = 43261596
Output: 964176192
Explanation:
IntegerBinary432615960000001010010100000111101001110096417619200111001011110000010100101000000
Example 2:
Input: n = 2147483644
Output: 1073741822
Explanation:
IntegerBinary214748364401111111111111111111111111111100107374182200111111111111111111111111111110
 
Constraints:
	- 0 &lt;= n &lt;= 231 - 2
	- n is even.
 
Follow up: If this function is called many times, how would you optimize it?
```