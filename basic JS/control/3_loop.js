function factorial(n) {
    let result = 1;
    for (let i = 1; i <= n; i++) {
      result *= i;
    }
    return result;
  }
  
  const number1 = 5; // Change this to the number for which you want to calculate the factorial
  const result1 = factorial(number);
  console.log(`The factorial of ${number} is ${result}`);

  function factorial(n) {
    let result = 1;
    let i = 1;
  
    while (i <= n) {
      result *= i;
      i++;
    }
  
    return result;
  }
  
  const number2 = 5; // Change this to the number for which you want to calculate the factorial
  const result2 = factorial(number);
  console.log(`The factorial of ${number} is ${result}`);
  

  function factorial(n) {
    let result = 1;
    let i = 1;
  
    do {
      result *= i;
      i++;
    } while (i <= n);
  
    return result;
  }
  
  const number = 5; // Change this to the number for which you want to calculate the factorial
  const result = factorial(number);
  console.log(`The factorial of ${number} is ${result}`);
  