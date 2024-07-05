export default function Delete({Delete,Task})
{
        return<>
        <button onClick={()=>Delete(Task)}>
            Delete
        </button>
        </>
}