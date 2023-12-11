// ParentComponent.js
import React from 'react';
import ChildComponent from './ChildComponent';

const ParentComponent = () => {
  return (
    <div className="parent-component">
      <h1>User Dashboard</h1>
      <ChildComponent />
    </div>
  );
};

export default ParentComponent;
