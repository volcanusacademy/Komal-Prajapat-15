import React from 'react'

const StudentCard = ({name ,age , course}) => {


  return (
    <>
      <div className="containere bg-blue-500 border-2 border-black p-3 m-4 w-[300px]">
        <h1>{name}</h1>
        <h1>{age}</h1>
        <h1>{course}</h1>
      </div>
   
    </>
  )
}

export default StudentCard
