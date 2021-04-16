# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Add book   |  |  |  |Scenario based    |
|  H_02       |View book  |  |  |  |Scenario based    |
|  H_03       |Search book|  |  |  |Scenario based    |
|  H_04       |Update book|  |  |  |Scenario based    |
|  H_05       |Delete book|  |  |  |Scenario based    |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |On the click of Add button  |    By giving different values| Correct answer according to the input values |----------------|Requirement based    |
|  L_02       |Checking whether adding negative number results the correct value|  By giving num1 or num2 or both as negative values| Correct answer according to the input values and operator |----------------|Scenario based |
|  L_03       |Checking whether subtracting negative number results the correct value|    By giving num1 or num2 or both as negative values| Correct answer according to the input values and operator|----------------|Scenario based    |
|  L_04       |Checking whether subtracting larger number from smaller number results the correct value|    By giving first operand value smaller than the second| Correct answer according to the input values and operator|----------------|Scenario based    |
|  L_05       |Checking whether multiplication of negative number results the correct value|    By giving num1 or num2 or both as negative values| Correct answer according to the input values and operator|----------------|Scenario based    |
|  L_06       |Checking whether multiplying 2 large numbers results overflow|    By giving num1 or num2 or both large values| Printing the message as, "Error, Result cannot be printed" |----------------|Boundary based    |
|  L_07       |Checking whether dividing negative number results the correct value|    By giving num1 or num2 or both as negative values| Correct answer according to the input values and operator|----------------|Scenario based    |
|  L_08       |Checking whether dividing by zero results an error |    By giving num2 = 0 | Printing the message as, "Error, Number cannot be divided by zero"|----------------|Requirement based    |
|  L_09       |Checking whether interest amount is correct or not  |    By giving different p,t,r,n values| Correct answer according to the input values |----------------|Requirement based    |
|  L_10       |Checking the result obtained for factorial, exponential, log, power  |    By giving different values| Correct answer according to the input values |----------------|Requirement based    |
|  L_11       |Checking the result obtained for  exponential function where given number is large negative value  |    By giving large negative value| Printing the message as, "Error, Result cannot be printed"  |----------------|Boundary based    |
|  L_12       |Checking the result obtained for  factorial, exponential, power where input value is very large  |    By giving large value| Printing the message as, "Error, Result cannot be printed"  |----------------|Boundary based    |
|  L_13       |Checking the result obtained for  log where input value is negative  |    By giving negative value| Printing the message as, "Error, number cannot be negative"  |----------------|Scenario based    |
|  L_14       |Checking whether exit option works properly or not  |    By selecting the correct option| Screen should be closed  |----------------|Scenario based    |
