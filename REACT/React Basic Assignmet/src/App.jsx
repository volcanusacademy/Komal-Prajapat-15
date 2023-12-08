import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import StudentCard from './components/StudentCard'
// import Button from './components/Button'
import Form from './components/Form'
// import PropsAndState from './components/PropsAndState'

function App() {
  const [count, setCount] = useState(0)

  return (
   <>
   
   {/* ......... 1 components creation and app integration ***** */}
    <StudentCard name="Sonu Jaat" age='12' course="Maths"></StudentCard>
    {/* ******** 2 Reusable compoents ****** */}
    <Form></Form>
    {/* <PropsAndState></PropsAndState> */}
    
    </>
  )
}

export default App
