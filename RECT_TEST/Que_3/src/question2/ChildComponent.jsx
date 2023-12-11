// ChildComponent.jsx
import React from 'react';

const ChildComponent = ({ students }) => {
  return (
    <div>
      <h3>Child Component</h3>

      {students.map(student => (
        <div key={student.id}>
          <p>Name: {student.name}</p>
          <p>Subject: {student.subject}</p>
          <p>Percentage: {student.percent}%</p>
          <hr />
        </div>
      ))}
    </div>
  );
};

export default ChildComponent;
