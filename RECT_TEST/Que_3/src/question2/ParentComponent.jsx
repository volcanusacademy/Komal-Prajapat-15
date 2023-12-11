// ParentComponent.jsx
import React from 'react';
import ChildComponent from './ChildComponent';

const ParentComponent = () => {
  const students = [
    { id: 1, name: 'Komal Prajapat', subject: 'BA', percent: 85 },
    { id: 1, name: 'Rohit Soni', subject: 'BBA', percent: 85 },
    { id: 2, name: 'Anirudh ', subject: 'BBA', percent: 92 },
    { id: 3, name: 'Piyush', subject: 'B.com', percent: 78 },
    { id: 4, name: 'Shivani ', subject: 'BCA', percent: 95 },
  ];

  const filterSubject = 'Math';
  const filteredStudents = students.filter(student =>  student.percent > 75);

  return (
    <div className="container">
    <h1>Question 2 </h1>
      <h3>Parent Component</h3>
      <p>Displaying students for subject: {filterSubject} with a percentage above 75%</p>  
      <ChildComponent students={filteredStudents} />
    </div>
  );
};

export default ParentComponent;
