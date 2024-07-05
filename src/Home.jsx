import { useRef } from "react"
export default function Home({Addfun})
{
    const inputref=useRef();
    const dateref=useRef();
    function handlesubmit(e)
    {
        e.preventDefault();
        Addfun({task:inputref.current.value,duedate:dateref.current.value});
        console.log(`item added with the value like ${inputref.current.value}  ${dateref.current.value} `);
        inputref.current.value='';
        dateref.current.value='';

    }
  
    return <>
    <form action="" onSubmit={handlesubmit}>
        <label htmlFor="input">Todo task :{`   `} </label>
        <input type="text" id="input" ref={inputref}/>
        <label htmlFor="date">Date : {`   `}</label>
        <input type="date" ref={dateref} id="date" />
        <button> Add</button>
    </form>
    </>
}