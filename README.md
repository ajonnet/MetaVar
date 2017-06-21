# MetaVar
MetaVar provides a iteration interface for a defined value set.

Intro
Consider a function which has n parameters (let say 3), and we want to play around values of these params in a interactive manner. If we follow traditional approach, it would consists of switch case, where we would be defining two handlers (increasing, decreasing) for each param to play with.

//Example using Traditional Interface

With the use of MetaVar we can do it as follows

//Example using MetaVar


Class Attributes
-Val : Current Value
-MinVal : ValueSet minimum value
-MaxVal : ValueSet maximum value
-StepVal : value by which increment or decrement is suppose to happen
-ValDesc : Description of ValueSet

Class Methods
-linkVar(int *var)
Stores the reference of provided variable and keep it in sync with current value of ValueSet.
-nextVal()
Increment current value to next value by adding step value. If maximum value has reached, the it will looped back to minimum Value.
-prevVal()
Decrement current value to next value by subtracting step value. If minimum value has reached, the it will looped back to maximum Value.
