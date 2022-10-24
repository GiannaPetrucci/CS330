# Programming Language Project C++

 ### History
 C++ is an object-oriented programming language that combines low-level and high-level language.
 It was created and developed by Danish computer scientist Bjarne Stroustrup inspired by the
 struggles in his PhD experience with C and simulation languages like Simula. C++'s development
 began in 1979 is the [fourth most popular programming language today](https://www.tiobe.com/tiobe-index/).
 
 C++ has many different applications and is used to code operating systems, video games, databases,
 web browsers, Internet of Things (IoT) devices, virtual reality experiences, flight simulation
 software, and more.
 
 
 
 ### Examples of software written in C++ include:
 
 - Google Chrome Browser
 - Mozilla Firefox
 - MySQL server 
 - Adobe Photoshop and Adobe Illustrator
 - Maya (3D software used for animation and other graphics)




### Resources for Future Programming


**Videos**

 [Beginner Video](https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&cad=rja&uact=8&ved=2ahUKEwirkbbYjZP6AhVNjIkEHQ4yAaQQwqsBegQICBAB&url=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3DMcojvctVsUs&usg=AOvVaw3KT81R3m7JUGuRSPkNg3Io)
 
 [GUI Apps in C++ Video](https://www.youtube.com/watch?v=FxQTXyR4mjs)
 
 [1 Hour Intro on C++](https://www.youtube.com/watch?v=ZzaPdXTrSb8)
 
 [Free Code Camp 4-Hour Course](https://youtu.be/vLnPwxZdW4Y)
 
 
 
 **Websites**
 
 https://cplusplus.com/doc/tutorial/
 
 https://www.w3schools.com/cpp/cpp_intro.asp
 
 https://www.geeksforgeeks.org/cpp-tutorial/
 
 https://stackoverflow.com/questions/388242/the-definitive-c-book-guide-and-list
 
 https://www.programiz.com/cpp-programming
 




 ### Getting Started
 
 To begin coding in C++ you will need to set some things up first. The first thing to do is
 choose your IDE. I went with Visual Studio Code because I already had this installed and
 I am familiar with using it. Eclipse is another popular option. I also needed to install
 the C++/C extension on VSCode as well as a compiler (I went with Clang). To run a program
 in C++ you will first need to "run build" on your code. This compiles it altogether, and
 then I am able to run the file as usual in VSCode with the Run button. To write a single
 line comment in C++ use two slashes:
 
 // This would be a single line comment
 
 To comment out multiple lines of code, encase the section in slashes and astericks:
 
 /* This can comment out a big chunk of code */
 
 
 
 ### Data Types and Naming Conventions
 
 **Reserved Words**
 
 Some words should not be used as variable, class, file, or function names as they are
 part of built in processes in C++. These reserved key words are: 
 
 ![Reserved Words Table](Images/ReservedKeywords.png)
 
 #### Variable Naming Rules
 
 - Variables must be unique from one another (cannot have two variables both named x)
 - Must begin with a letter or underscore (1name is not acceptable but oneName or _Name are)
 - They are case sensitive, making myVariable and myvariable, two different identifiers
 - Variables cannot have spaces or special characters like !, @, $, &, etc.
 - Reserved Words cannot be used
 - Numbers can be a part of a variable as long as they are not at the beginning (hello1 is fine)


 #### Naming Conventions
 
 C++ is a statically typed explicit programming language, which means the data types must be declared. It is strongly typed
 which is enforced by a compiler. This ensures you are not doing something such as trying to add a sentence
 and number together. Variables in C++ are not mutable unless the "mutable" keyword is used before the variable 
 assignment. This allows you to change the value of the variable later on.
 
 C++ **Strings** can be compared and assigned with the standard comparison operators: ==, != , <=, >=, <, >, and =.
 **Assignment** operators can also be used to assign value to strings. For example, x = 12, assigns 12 to x.
 
 **Integers**, **Floats**, and **Doubles** can also use comparison operators as well as arithmatic operators such
 as +, -, *, %, and /. **Increment** and **Decrement** operators can also be used on these number types to increase
 (++) or decrease (--) their value by one.

Typically mixing different data types is avoided in C++. However, when it is utilized types are automatically converted
from "smaller" to "larger" data types. It follows this pattern starting at the lowest:

              char -> short -> int -> long -> float -> double -> long double

So if an int and float are added, they will be converted to the larger "float". However, you cannot add a string and an int.

**Binding**

C++ uses early-binding, where a compiler directly associates an address to the function call. Therefore variables will be bound
when the compiler runs.



### Booleans

While coding **true** or **false** can be used to represent boolean values. However, they are stored as 0 and 1. 

This can be seen in the code example below.

https://github.com/GiannaPetrucci/CS330/blob/7a60adc472fc1a19398e35f96cbc480103fe304d/PLP3/conditionals.cpp#L1-L14


### Conditional Statements

C++ does not have a wide variety of conditional statements. There are **IF** statements which can stand alone. **IF/ELSE** statements, as ELSE cannot
be on its own. **ELSE IF** statements which also cannot be standalone and are wedged in between **IF** and **ELSE** statements. And finally a **SWITCH**
statement, which functions the same as the switch statement in Java condensing different conditions and outcomes into one chunk.

#### Delimiters

Conditions are encased in paretheses. This can be seen in the example below where (firstCondition is true) and (secondCondition is true). Following the 
condition is the result in curly brackets. If the first condition is true then "First Condition True" will be printed. The curly brackets close before the next else if or else statement begins. This pattern would repeat for however many else if statements. 
 
```cpp
if (firstCondition is true) {
  cout << "First Condition True" <<endl;
} else if (secondCondition is true) {
  cout << "First Condition False,Second Condition True" <<endl;
} else {
  cout << "First and Second Conditions are False" <<endl;
}
```

Delimiters are different in **switch statements**. This can be seen in the framework for a switch statement below.

```cpp
switch(expression) {
  case a:
    
    break;
  case b:
    
    break;
  default:
  
  }
    
```

#### Short Circuiting

C++ does utilize short circuit evaluation, which means in an **AND** statement if the first boolean is false, other booleans in the conditional will
not be evaluated. Similarly in **OR** statements, if the first boolean is true, it will not check the other ones. 

https://github.com/GiannaPetrucci/CS330/blob/dda8bcc73f6d0ff4bde2b996eb42ca2d37f19ef3/PLP3/conditionals.cpp#L23-L31
In the example above, the first **IF** statement is false so the **IF ELSE** statement will be evaluated. Because isPython is equal to 0/false which
fulfills the condition the final else statement will not be considered. If there was another **IF ELSE** or five more none would be evaluated because
the first one fulfills the condition. 

#### Dangling Else

An example of a dangling else, where there are nested **IFS** and the **ELSE** does not know which one to go to, can be seen below.

https://github.com/GiannaPetrucci/CS330/blob/54312045e3eee32ac37d4a28720214e8fdb88751/PLP3/danglingElse.cpp#L1-L19

In this scenario x is equal to 12. The first **IF** is false/0 because x does not equal 
10. But the second **IF** does not matter even though it is true, x is smaller than 50.
In this case the second **IF** is passed over and the **ELSE** statement prints out
"dangling else".

#### Note on Switch Statements

Switch statements require **break** keywords after each case. This tells the program that if a case is true, do not test the
others. **Continue** keywords cannot be used in switch statements.


### Loops

There are two categories of loops that can be implemented in C++. The first kind is Entry Controlled. This is where the condition is tested
at the beginning or "entry" before continuing on to the actions taking place in the loop. The second kind is exit controlled, where as the name
implies the loop is executed and then the end or "exit" condition is tested. These categories are illustrated in the diagram below from [GeeksforGeeks.org](https://www.geeksforgeeks.org/cpp-loops/).

![Loop Diagram](Images/LoopDiagram.png)
