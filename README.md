# Palindrome++
Palindrome++ is an esoteric programming language developed for people who love C++, but wish there were more palindromes in their code. The Palindrome++ compiler takes in a code file and attempts to interpret it as C++ code if and only if each line a 

Palindrome++ files use the `ppp` extension

Palindrome++ uses the following critera to determine if a line is a palindrome:
- A line must be read the same forwards as backwards
- Letter case and white space matters. If a line begins with a tab, it must end with a tab
- Brackets, parentheses, curly brackets, angle brackets, and slashes must be mirrored. For example:
   - `int main()()niam tni` is a valid palindrome, while `int main())(niam tni` is not considered a palindrome
   

If a line is a valid palindrome, Palindrome++ will attempt to split the line in half and interpret the first half as valid C++ code. If a line is an odd number of characters, the middle character must be whitespace or else Palindrome++ will throw an error due to ambiguity. If a line is an even number of characters, there is no ambiguity of where to split.
