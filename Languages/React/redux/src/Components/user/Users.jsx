import { useEffect, useState } from "react";
import { useDispatch, useSelector } from "react-redux";
import { addUser, deleteUser, updateUser } from "../Reducers/User.Reducer";

const Users = () => {
    const [users, setUsers] = useState([]);
    const [Data, setData] = useState({
        name: "",
        email: "",
        password: "",
        id:""
    });

    const handleChange = (e) => {
        setData({ ...Data, [e?.target?.name]: e?.target?.value });
    };

    const allUser = useSelector((state) => state?.User);
    const dispatch = useDispatch();

    useEffect(() => {
        setUsers(allUser);

    }, [allUser]);

    const addData = (e) => {
        e.preventDefault();
        if (Data.id) {
            dispatch(updateUser({...Data }));
        } else {
            dispatch(addUser(Data));
            console.log(users.length);
        }
        setData({
            name: "",
            email: "",
            password: "",
            id:""
        })

    };

    const removeUser = (id) => {
        console.log(id);
        dispatch(deleteUser({ id }));
    };
    const editUser = (id) => {
        let USER = users.filter((user) => user.id === id)
        console.log(USER[0].name);

        setData({
            name: USER[0].name,
            email: USER[0].email,
            password: USER[0].password,
            id: USER[0].id,
        })
    };

    return (
        <>
            <form onSubmit={addData}>
                <input type="text" name="id" hidden onChange={handleChange} value={Data.id}/>
                <input type="text" name="name" onChange={handleChange} value={Data.name}/>
                <input type="text" name="email" onChange={handleChange} value={Data.email}/>
                <input type="text" name="password" onChange={handleChange} value={Data.password}/>
                <input type="submit" style={{cursor:'pointer'}} value="Submit" />
            </form>
            {users.length > 0 ? (
                <table>
                    <tr>
                        <th>ID</th>
                        <th>Name</th>
                        <th>Email</th>
                        <th>Password</th>
                        <th>edit</th>
                        <th>Delete</th>
                    </tr>
                    {users.map((user,id) => (
                        <tr key={user?.id}>
                            <td>{id+1}</td>
                            <td>{user?.name}</td>
                            <td>{user?.email}</td>
                            <td>{user?.password}</td>
                            <td style={{cursor : 'pointer'}} onClick={() => editUser(user?.id)}>edit</td>
                            <td style={{cursor : 'pointer'}} onClick={() => removeUser(user?.id)}>Delete</td>
                        </tr>
                    ))}
                </table>
            ) : (
                <p>No users available.</p>
            )}
        </>
    );
};

export default Users;
