// CounterComponent.js
import React, { useState } from 'react';
import './counter.css'
const CounterComponent = () => {
  const [counter, setCounter] = useState(0);

  const increase = () => {
    setCounter(counter + 1);
  };

  const decrease = () => {
    setCounter(counter - 1);
  };

  return (
    <div>
    <div className="container">
    <h1>Question 1 Counter </h1>
      <div id="counter">{counter}</div>
      <button onClick={increase}>Increase</button>
      <button onClick={decrease}>Decrease</button>
    </div>
    </div>
  );
};

export default CounterComponent;
