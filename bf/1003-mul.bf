# Read First Number 1
>
,
>
,
# Read Second Number in 2
# 0 : 0
<<
# Convert to Number (Substract 48)
++++ ++++
[
  >--- ---
  >--- ---
  <<-
]
# Multiply
>
[
 >
 # Make Copy in # 3 and 4 of second value (2 is destroyed)
   [
    >+
    >+
    <<-
   ]
 >
  # Moves 3 to 2 (3 is destroyed)
   [
    <+
    >-
   ]
 <<-
]
# Ends in #1 (First Inputed Value)
# Multiplication Result will be in #4
# Split Number
(Example 7 * 7 = 49)
> [-]
>+
>> +++++ +++++
<
# Cell 4
[
  -
  >-
  [>>>]
  +++++ +++++
  <<+
  [<<<]
  >>>>
]
# Ends in  Cell 4
<-
<+++++ +++++
>>>
# Ends in Cell 5
# First Value is in Cell 3 (4)
# Calculate Second Value
# (Substracts 10 - Highest Value inputed)
# Cells 2 - 5)
[
  -
  <<<
  -
  >>>
]
<<<--
# Ends in Cell 2
# Second Value is in cell 2 (9)
# Print (Must convert to ASCII Adding 48)
# Back to Cell 0
<<++++ ++++
[
 >>>+++ +++
 <+++ +++
 <<-
]
>>>.
<.
# Print new line with Cell 0
<<+++++ +++++.
