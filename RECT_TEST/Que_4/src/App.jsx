// App.js
import React from 'react';
import ParentComponent from './ParentComponent';
import { AuthProvider } from './AuthContext';

const App = () => {
  return (
    <AuthProvider>
      <div className="app-container">
        <h1>Secure App</h1>
        <ParentComponent />
      </div>
    </AuthProvider>
  );
};

export default App;
