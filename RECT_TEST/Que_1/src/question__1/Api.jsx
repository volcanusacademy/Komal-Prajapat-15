import { useEffect, useState } from 'react'

import React from 'react'
import './api.css'

const Fetach = () => {
    const [api, setapi] = useState([])
    useEffect(() => {

        const fetchdata =  async ()=>{
            const api = await fetch('https://jsonplaceholder.typicode.com/todos');
            const data =await api.json()
            console.log(data)
            setapi(data)
        }
        fetchdata()

     }, [])
    

     console.log("data in state",api);

  return (
    <>
    <h1 className='container-h'>Data Fetch From API</h1>
    <p></p>
        {api.map((data)=>{
            return(
                <>
                    <div className="container-Api">
                   
                    <h2>data:- {data.title}</h2>
                    
                    </div>
                </>
            )
        })}   
    </>
  )
}

export default Fetach
