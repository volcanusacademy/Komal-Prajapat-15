// ChildComponent.js
import React from 'react';
import { useAuth } from './AuthContext';

const DeeplyNestedComponent = () => {
  const { authenticated } = useAuth();

  return (
    <div className="nested-component">
      <h3>User Authentication Status</h3>
      <p>{authenticated ? 'Welcome back! You are authenticated.' : 'Please log in to access your account.'}</p>
    </div>
  );
};

const ChildComponent = () => {
  return (
    <div className="child-component">
      <h2>Account Information</h2>
      <DeeplyNestedComponent />
    </div>
  );
};

export default ChildComponent;
