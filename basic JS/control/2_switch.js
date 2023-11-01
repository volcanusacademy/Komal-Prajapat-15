function calculate(num1, operator, num2) {
    switch (operator) {
      case '+':
        return num1 + num2;
      case '-':
        return num1 - num2;
      case '*':
        return num1 * num2;
      case '/':
        if (num2 !== 0) {
          return num1 / num2;
        } else {
          return "Cannot divide by zero";
        }
      default:
        return "Invalid";
    }
  }
  
  const number1 = 10;
  const number2 = 5;
  const operation = '*'; // Change this to the desired operator (+, -, *, /)
  
  const result = calculate(number1, operation, number2);
  console.log(`Result: ${result}`);
  