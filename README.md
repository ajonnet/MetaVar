# MetaVar
MetaVar provides a iteration interface for a defined value set.

## Intro
Consider a function which has n parameters (let say 3), and we want to play around values of these params in a interactive manner. If we follow traditional approach, it would consists of a switch case, where we would be defining two handlers (increasing, decreasing) for each param to play with, plus we have to make sure value donot cross their bounderies. Code will grow large quickly for a similar kind of functionality we want for each param. Also we would have to remember and define 2*n handlers (2*3 = 6).

This class addressess above stated problem, by providing a meta class holding information related to valueSet which variable/param is supposed to have. Below snippets demonstorates, usability of above class.

//Example using Traditional Interface

With the use of MetaVar we can do it as follows

//Example using MetaVar


## Class Attributes
- **Val** : Current Value
- **MinVal** : ValueSet minimum value
- **MaxVal** : ValueSet maximum value
- **StepVal** : value by which increment or decrement is suppose to happen
- **ValDesc** : Description of ValueSet

## Class Methods
- **linkVar(int \*var)** :  
Stores the reference of provided variable and keep it in sync with current value of ValueSet.
- **nextVal()** :  
Increment current value to next value by adding step value. If maximum value has reached, the it will looped back to minimum Value.
- **prevVal()** :  
Decrement current value to next value by subtracting step value. If minimum value has reached, the it will looped back to maximum Value.
