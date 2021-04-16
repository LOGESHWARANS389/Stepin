# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       | Add book   | 1234,"cs"  | 1  | 1  | Scenario based    |

|  H_02       | View book  | 1234,"cs"  | 1  | 1  | Scenario based    | 

|  H_03       | Search book | 1234  | 1  | 1  | Scenario based    |

|  H_04       | Update book | 1234, "issued", "16/04/21", "31/05/21", "Rahul","J", 900  |1  |1  | Scenario based    |

|  H_05       | Delete book | 1234  | 1  | 1  | Scenario based    |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |On the click of Add button  |    By giving different values| Correct answer according to the input values ||Scenario based    |
|  L_02       |Checking whether adding negative number results the correct value|  By giving num1 or num2 or both as negative values| Correct answer according to the input values and operator |----------------|Scenario based |
|  L_03       |Checking whether subtracting negative number results the correct value|    By giving num1 or num2 or both as negative values| Correct answer according to the input values and operator|----------------|Scenario based    |
|  L_04       |Checking whether subtracting larger number from smaller number results the correct value|    By giving first operand value smaller than the second| Correct answer according to the input values and operator|----------------|Scenario based    |
|  L_05       |Checking whether multiplication of negative number results the correct value|    By giving num1 or num2 or both as negative values| Correct answer according to the input values and operator|----------------|Scenario based    |
