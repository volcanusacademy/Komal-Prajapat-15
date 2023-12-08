import React from 'react'

const Button = (props) => {

  return (
    <>
    <div className="container ml-10 p2">
        <button  className='ml-2 bg-black rounded w-24 text-white hover:bg-slate-700' onClick={props.resetForm}>Submit</button>
        <button className='ml-2 bg-black rounded w-24 text-white hover:bg-slate-700'  onClick={props.submitForm}>Reset</button>
        </div>
    </>

    
  )
}

export default Button
