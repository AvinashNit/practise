import Delete from "./DeleteTask"
export default function Task({Tasks,Delete})
{
    return <>
            {
                Tasks.map(task=>
                    <li>
                        {task.task}
                        {
                            task.duedate
                        }
                        <button onClick={()=>Delete(task)}>Delete</button>
                    </li>
        )
            }
    </>
}