import React, { useState } from 'react';
import Button from './Button';

const Form = () => {
 
  const [name, setName] = useState('');

  const handleNameChange = (e) => {
   
    setName(e.target.value);
  };

  const resetForm = () => {
    alert("From submited");
   
  };

  const submitForm = () => {
    setName('');
  
  };

  return (
    <>
      <div className="container border-2 m-10 p-3">
        <form action="">
          <label htmlFor="name">Name :- </label>
          <input
            type="text"
            name="name"
            id="name"
            className='border-2'
            value={name}
            onChange={handleNameChange}
          /><br/>
        </form>
      </div>
      <Button resetForm={resetForm} submitForm={submitForm} />
    </>
  );
};

export default Form;
