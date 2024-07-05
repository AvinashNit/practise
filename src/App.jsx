import { useState } from "react"
import Message from "./Message";
import Home from "./Home";
import Task from "./IndividTask";
export default function App()
{
  const [tasks,settasks]=useState([]);
  function Addfun(Task)
  {
    settasks(task1=>[...task1,{task:Task.task,duedate:Task.duedate}])
  }
  function Delete(task)
  {
     settasks(tasks=>tasks.filter(task1=>task1.task!=task.task))
  }
  return <>
    <Message></Message>
     <Home Addfun={Addfun}></Home>
     <Task Tasks={tasks} Delete={Delete}></Task>
  </>
}